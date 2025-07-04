#include <bits/stdc++.h>
using namespace std;
int main(){
    bool f;
int l;
cin>>l;
while(l>0){
    f=false;
    int n;
    cin>>n;
    vector<vector<char>> a(2,vector<char>(n));
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<n-1; i+=2){
        if((a[0][i]=='<'&& a[1][i-1]=='<')||(a[0][i]=='<'&& a[1][i+1]=='<')) f=true;
    }
    if(a[0][n-1]=='<'&& a[1][n-2]=='<') f=true;
    if(f) cout<<"NO\n";
    else cout<<"YES\n";
    l--;
 
 }
 
}