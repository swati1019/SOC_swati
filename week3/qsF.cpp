#include <iostream>
#include <string>
#include <vector>
 
void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int first_known = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] != '?') {
            first_known = i;
            break;
        }
    }
    if (first_known == -1) {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                s[i] = 'B';
            } else {
                s[i] = 'R';
            }
        }
    } else {
        for (int i = first_known + 1; i < n; ++i) {
            if (s[i] == '?') {
                if (s[i - 1] == 'R') {
                    s[i] = 'B';
                } else {
                    s[i] = 'R';
                }
            }
        }
 
        // Fill from right to left
        for (int i = first_known - 1; i >= 0; --i) {
            if (s[i] == '?') {
                if (s[i + 1] == 'R') {
                    s[i] = 'B';
                } else {
                    s[i] = 'R';
                }
            }
        }
    }
 
    std::cout << s << std::endl;
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
