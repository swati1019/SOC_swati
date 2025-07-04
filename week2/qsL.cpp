#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int l;
    cin >> l;
    while (l--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        if (a[0]!=1) {
            cout << "NO\n";
            continue;
        }
 
        long long sum = 1;
        bool f=true;
 
        for (int i=1; i < n; i++) {
            if (a[i] > sum) {
                f=false;
                break;
            }
            sum += a[i];
        }
 
        if(f) cout << "YES\n";
        else cout << "NO\n";
 
    }
}