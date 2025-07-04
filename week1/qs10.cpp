#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,best=0, sum=0, o=0;
    cin>>n;
    int a[n];
    for(int k=0; k<n; k++){
        cin>>a[k];
        if (a[k]==1) o++;
        if(a[k]==0) a[k]=1;
        else a[k]=-1;
    }
    for(int k=0; k<n; k++){
        sum = max(a[k],sum+a[k]);
        best = max(best,sum);
    }
    if(best==0) cout<<o-1;
    else cout<<best+o;
}