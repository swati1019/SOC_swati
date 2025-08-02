#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int a, b, c;
    std::cin >> a >> b >> c;
 
    long long numerator = (long long)(a - b) * c;
    long long denominator = b;
 
    long long result = (numerator + denominator - 1) / denominator;
 
    std::cout << result << std::endl;
 
    return 0;
}
