#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    
    int max_len = 0;
    int current_len = 1;
    vector<pair<int, int>> segments;
    
    for (int i = 1; i < n; ++i) {
        if (t[i] == t[i - 1]) {
            current_len++;
        } else {
            segments.emplace_back(t[i - 1], current_len);
            current_len = 1;
        }
    }
    segments.emplace_back(t[n - 1], current_len);
    
    for (int i = 1; i < segments.size(); ++i) {
        int len = min(segments[i - 1].second, segments[i].second);
        max_len = max(max_len, 2 * len);
    }
    
    cout << max_len << '\n';
    
    return 0;
}
→
