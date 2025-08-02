#include <iostream>
#include <vector>
#include <numeric>
void solve() {
    int n;
    std::cin >> n;
    if (n == 2) {
        std::cout << 1 << std::endl;
        std::string u, v;
        std::cin >> u >> v;
        return;
    }
 
    std::vector<int> degree(n + 1, 0);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        std::cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }
 
    int leaves = 0;
    for (int i = 1; i <= n; ++i) {
        if (degree[i] == 1) {
            leaves++;
        }
    }
 
    if (leaves <= 2) {
        std::cout << 1 << std::endl;
    } else {
        int ops_to_path = (leaves - 1) / 2;
        std::cout << ops_to_path + 1 << std::endl;
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
