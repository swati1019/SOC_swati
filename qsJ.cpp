#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
 
long long MOD = 1e9 + 7;
 
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
void solve() {
    long long n, k;
    std::cin >> n >> k;
    std::vector<long long> a(n);
    long long S = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        S += a[i];
    }
    long long max_sub_sum = 0;
    long long max_ending_here = 0;
    for (long long x : a) {
        max_ending_here += x;
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        max_sub_sum = std::max(max_sub_sum, max_ending_here);
    }
    
    // Convert S to be in [0, MOD-1]
    long long S_mod = (S % MOD + MOD) % MOD;
 
    if (max_sub_sum == 0) {
        std::cout << S_mod << std::endl;
        return;
    }
    long long max_sub_sum_mod = max_sub_sum % MOD;
    
    long long pow2k = power(2, k);
    long long total_added_sum = (max_sub_sum_mod * ((pow2k - 1 + MOD) % MOD)) % MOD;
    
    long long final_sum = (S_mod + total_added_sum) % MOD;
 
    std::cout << final_sum << std::endl;
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

