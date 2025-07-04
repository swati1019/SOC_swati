#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,sum=0,c=0,m=0,s=0;
    cin>>n>>t;
    int a[n];
    for(int k=0; k<n; k++){
        cin>>a[k];
    }
    for(int k=0; k<n; k++){
        sum = sum+a[k];
        c++;
        if(sum>t){
        sum=sum-a[s];
        c=c-1;
            s++;
        }
 
        m=max(c,m);
    }
 
    cout<<m;
}