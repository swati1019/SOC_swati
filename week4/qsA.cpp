#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
 
        long long patternSum = a + b + c;
        long long fullCycles = n / patternSum;
        long long totalDistance = fullCycles * patternSum;
        int day = fullCycles * 3;
        if (totalDistance < n) {
            totalDistance += a;
            day++;
        }
        if (totalDistance < n) {
            totalDistance += b;
            day++;
        }
        if (totalDistance < n) {
            totalDistance += c;
            day++;
        }
 
        cout << day << endl;
    }
    return 0;
}