#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,i=0,c=0,t=0;
    cin>>n>>d;
    int a[n];
    for(int k=0; k<n; k++){
        cin>>a[k];
    }
    sort(a,a+n);
    while(t<=n){
        int k=0;
        while(a[n-(i+1)]*(k)<=d){
            k++;
        }
        if(t+k<=n){
        if(a[n-(i+1)]*k>d){
            c++;
        }}
        t=t+k;
        i++;
        
    }
    cout<<c;
}