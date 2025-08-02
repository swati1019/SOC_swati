#include <iostream>
#include <vector>
 
void solve() {
    int n, q;
    std::cin >> n >> q;
 
    std::vector<int> first_pos(51, 0);
    for (int i = 0; i < n; ++i) {
        int color;
        std::cin >> color;
        if (first_pos[color] == 0) {
            first_pos[color] = i + 1;
        }
    }
    for (int j = 0; j < q; ++j) {
        int t;
        std::cin >> t;
 
        int current_pos = first_pos[t];
        std::cout << current_pos << (j == q - 1 ? "" : " ");
        for (int c = 1; c <= 50; ++c) {
            if (c != t && first_pos[c] != 0 && first_pos[c] < current_pos) {
                first_pos[c]++;
            }
        }
        first_pos[t] = 1;
    }
    std::cout << std::endl;
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
