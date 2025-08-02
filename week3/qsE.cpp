#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
 
void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
 
    if (n == 1) {
        std::cout << 0 << std::endl;
        return;
    }
 
    int s0_val = s[0] - '0';
    int s_diff_count = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) {
            s_diff_count++;
        }
    }
    int ops_all_1s = (s0_val == 0) + s_diff_count;
    int ops_all_0s = (s0_val == 1) + s_diff_count;
    int min_ops = std::min(ops_all_1s, ops_all_0s);
    int ops_mid_base = (s0_val == 1) + s_diff_count;
    int min_ops_mid;
    
    if (s_diff_count > 0) {
        min_ops_mid = ops_mid_base - 1;
    } else { 
        min_ops_mid = ops_mid_base + 1;
    }
 
    min_ops = std::min(min_ops, min_ops_mid);
    
    std::cout << min_ops << std::endl;
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
