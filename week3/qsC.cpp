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
        if(n%2==0){
            int max_value= *max_element(a.begin(),a.end());
            cout<<max_value+(n/2)<<'\n';
        }
        else {
            vector<int> x1,x2;
            for(int i=0; i<n; i+=2){
                x1.push_back(a[i]);
            }
            int max_value1= *max_element(x1.begin(),x1.end());
            int score1=max_value1+(n/2)+1;
            for(int i=1; i<n; i+=2){
                x2.push_back(a[i]);
            }
            
            int max_value2 = x2.empty() ? 0 : *max_element(x2.begin(), x2.end());
            int score2=max_value2+(n/2);
            cout<<max(score1,score2)<<'\n';
 
        }
 
        l--;
    }
    
}