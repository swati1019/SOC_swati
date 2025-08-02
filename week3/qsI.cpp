#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
 
    vector<int> candies;
    int sum = 0;
    int i = 1;
    while (sum + i <= n) {
        candies.push_back(i);
        sum += i;
        i++;
    }
    if (sum < n) {
        candies.back() += (n - sum);
    }
    cout << candies.size() << endl;
    for (int x : candies) {
        cout << x << " ";
    }
    cout << endl;
 
    return 0;
}
