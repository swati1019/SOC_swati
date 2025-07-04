#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int l;
        cin>>l;
        long long a[l];
        for(int i=0; i<l; i++){
            cin>>a[i];
        }
        if(l%2!=0){
            cout<<"YES\n";
        }
        else {
          for(int i=1; i<l-1; i++){
           long long d=a[i-1]-a[i];
           a[i]+=d;
           a[i+1]+=d;
          }
          if(a[l-1]>=a[l-2]) cout<<"YES\n";
          else cout<<"NO\n";
        }
        n--;
    }
}