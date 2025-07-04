#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        long long c=0;
        cin >> n;
        vector<double> v(n),s(n); 
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            s[i]=v[i]-log2(v[i]);
        }
        
        unordered_map<double, int> freq; 
 
 
        for (int i = 0; i < n; i++) {
         c += freq[s[i]];
          freq[s[i]]++;             
       }
 
    cout << c<<endl;
 
       
 
        t--;
 
    }
 
}