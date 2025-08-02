#include <iostream>
#include <vector>
#include <algorithm>
 
void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> a(n);
    std::vector<long long> b(n);
 
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }
 
    long long max_c = -3e18;
    if (n > 0) {
        max_c = a[0] - b[0];
    }
 
    for (int i = 1; i < n; ++i) {
        max_c = std::max(max_c, a[i] - b[i]);
    }
    
    std::vector<int> strong_vertices;
    for (int i = 0; i < n; ++i) {
        if (a[i] - b[i] == max_c) {
            strong_vertices.push_back(i + 1);
        }
    }
 
    std::cout << strong_vertices.size() << std::endl;
    for (size_t i = 0; i < strong_vertices.size(); ++i) {
        std::cout << strong_vertices[i] << (i == strong_vertices.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
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
