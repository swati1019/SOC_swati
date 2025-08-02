#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k = sqrt(n);
        if (k * k < n) {
            k++;
        }
        cout << k - 1 << '\n';
    }
    return 0;
}
