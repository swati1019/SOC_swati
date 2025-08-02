#include <iostream>
#include <vector>
 
void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> adj(n + 1);
    for (int i = 2; i <= n; ++i) {
        int p;
        std::cin >> p;
        adj[p].push_back(i);
    }
 
    bool is_spruce = true;
    for (int v = 1; v <= n; ++v) {
        if (!adj[v].empty()) {
            int leaf_children_count = 0;
            for (int child : adj[v]) {
                if (adj[child].empty()) {
                    leaf_children_count++;
                }
            }
            if (leaf_children_count < 3) {
                is_spruce = false;
                break;
            }
        }
    }
 
    if (is_spruce) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
