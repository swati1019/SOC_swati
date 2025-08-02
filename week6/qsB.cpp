#include <iostream>
#include <vector>
#include <string>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int R, C;
    std::cin >> R >> C;
    
    std::vector<std::string> pasture(R);
    for (int i = 0; i < R; ++i) {
        std::cin >> pasture[i];
    }
    
    bool possible = true;
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            if (pasture[r][c] == 'W') {
                if (r > 0 && pasture[r-1][c] == 'S') {
                    possible = false;
                    break;
                }
                if (r < R - 1 && pasture[r+1][c] == 'S') {
                    possible = false;
                    break;
                }
                if (c > 0 && pasture[r][c-1] == 'S') {
                    possible = false;
                    break;
                }
                if (c < C - 1 && pasture[r][c+1] == 'S') {
                    possible = false;
                    break;
                }
            }
        }
        if (!possible) {
            break;
        }
    }
    
    if (!possible) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                if (pasture[r][c] == '.') {
                    std::cout << 'D';
                } else {
                    std::cout << pasture[r][c];
                }
            }
            std::cout << std::endl;
        }
    }
    
    return 0;
}
