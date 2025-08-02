#include <bits/stdc++.h>
using namespace std;
 
int maxCoins(const string& path) {
    int n = path.size();
    vector<int> dp(n, -1); 
 
    dp[0] = 0; 
 
    for (int i = 1; i < n; ++i) {
        if (path[i] == '*') continue;
 
        int maxCoinsFromPrev = -1;
 
        if (i - 1 >= 0 && dp[i - 1] != -1)
            maxCoinsFromPrev = max(maxCoinsFromPrev, dp[i - 1]);
 
        if (i - 2 >= 0 && dp[i - 2] != -1)
            maxCoinsFromPrev = max(maxCoinsFromPrev, dp[i - 2]);
 
        if (maxCoinsFromPrev != -1)
            dp[i] = maxCoinsFromPrev + (path[i] == '@' ? 1 : 0);
    }
    int maxCoinsCollected = 0;
    for (int coins : dp) {
        maxCoinsCollected = max(maxCoinsCollected, coins);
    }
    return maxCoinsCollected;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string path;
        cin >> n >> path;
        cout << maxCoins(path) << endl;
    }
    return 0;
}
