#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int l; 
    cin>>l;
 
    while (l>0) {
        int n,x,c = 0;
        cin>>n>>x;
 
        vector<int> a(n);
        vector<int> temp;
 
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
 
        for (int i=n-1; i>=0; i--) {
            if (a[i]>=x) {
                c++;
                continue;
            } 
            else {
                temp.push_back(a[i]);
                int minVal = *min_element(temp.begin(), temp.end());
                if (temp.size() * minVal>=x) {
                    c++;
                    temp.clear();
                }
            }
        }
 
        cout << c << endl;
        l--;
    }
}