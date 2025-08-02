#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    std::cin >> n;
 
    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }
 
    int max_depth = 0;
    for (int i = 1; i <= n; ++i) {
        int current_employee = i;
        int current_depth = 1;
 
        while (p[current_employee - 1] != -1) {
            current_employee = p[current_employee - 1];
            current_depth++;
        }
 
        if (current_depth > max_depth) {
            max_depth = current_depth;
        }
    }
 
    std::cout << max_depth << std::endl;
 
    return 0;
}
