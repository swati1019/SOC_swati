#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
void solve() {
    int n;
    std::cin >> n;
    std::string enemy_pawns;
    std::cin >> enemy_pawns;
    std::string gregor_pawns;
    std::cin >> gregor_pawns;
 
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (gregor_pawns[i] == '1') {
            if (i > 0 && enemy_pawns[i - 1] == '1') {
                ans++;
                enemy_pawns[i - 1] = '0';
            }
            else if (enemy_pawns[i] == '0') {
                ans++;
            }
            else if (i < n - 1 && enemy_pawns[i + 1] == '1') {
                ans++;
                enemy_pawns[i + 1] = '0';
            }
        }
    }
    std::cout << ans << std::endl;
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
