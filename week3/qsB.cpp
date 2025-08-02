#include <iostream>
#include <vector>
#include <numeric>
 
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }
 
    if (n < 2) {
        std::cout << 0 << std::endl;
        return;
    }
 
    int odd_subarrays_count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (p[i] > p[i + 1]) {
            odd_subarrays_count++;
            i++;
        }
    }
    std::cout << odd_subarrays_count << std::endl;
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
