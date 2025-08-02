#include <iostream>
#include <vector>
#include <numeric>
 
void solve() {
    int n, m;
    std::cin >> n >> m;
 
    std::vector<bool> is_restricted_b(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        is_restricted_b[b] = true;
    }
 
    int center_node = -1;
    for (int i = 1; i <= n; ++i) {
        if (!is_restricted_b[i]) {
            center_node = i;
            break;
        }
    }
 
    for (int i = 1; i <= n; ++i) {
        if (i != center_node) {
            std::cout << center_node << " " << i << std::endl;
        }
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
