#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int l;
    cin >> l;
    while (l>0) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int min_value = 1;
        int max_value = n;
        int min_pos = find(a.begin(), a.end(), min_value) - a.begin();
        int max_pos = find(a.begin(), a.end(), max_value) - a.begin();
 
        if (max_pos < min_pos) swap(max_pos, min_pos);
 
        int v1 = max(max_pos + 1, min_pos + 1);
        int v2 = max(n - max_pos, n - min_pos);
        int v3 = min_pos + 1 + n - max_pos;
 
        cout << min({v1, v2, v3}) << '\n';
        l--;
    }
    
}