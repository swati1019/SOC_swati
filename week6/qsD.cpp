#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    std::cin >> n;
 
    int ax, ay;
    std::cin >> ax >> ay;
 
    int bx, by;
    std::cin >> bx >> by;
 
    int cx, cy;
    std::cin >> cx >> cy;
 
    bool same_x_half = (bx < ax) == (cx < ax);
    bool same_y_half = (by < ay) == (cy < ay);
 
    if (same_x_half && same_y_half) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}
