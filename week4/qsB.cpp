#include <iostream>
#include <string>
#include <cmath>
 
void solve() {
    std::string s;
    std::cin >> s;
    int year = std::stoi(s);
    int root = static_cast<int>(round(sqrt(year)));
    if (root * root == year) {
        std::cout << 0 << " " << root << std::endl;
    } else {
        std::cout << -1 << std::endl;
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
