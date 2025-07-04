#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    while (n>0) {
        int l;
        cin >> l;
 
        vector<long long> v(l);
        for (int i = 0; i < l; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end()); 
        v.erase(unique(v.begin(),v.end()),v.end());
 
        int c = 0;
        for (auto i=0; i< v.size(); i++) {
            auto it = lower_bound(v.begin(),v.end(),v[i] + l);
            int d = it-v.begin()-i;
            c = max(c, d);
        }
 
        cout << c << endl;
        n--;
    }
 
}