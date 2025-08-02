#include <iostream>
#include <vector>
#include <numeric>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    std::cin >> n;
 
    std::vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> p[i];
    }
 
    for (int start_student = 1; start_student <= n; ++start_student) {
        std::vector<bool> has_hole(n + 1, false);
        int current_student = start_student;
        
        while (true) {
            if (has_hole[current_student]) {
                std::cout << current_student << " ";
                break;
            }
            has_hole[current_student] = true;
            current_student = p[current_student];
        }
    }
    std::cout << std::endl;
 
    return 0;
}
