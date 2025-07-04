#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    while(i<n){
        int m; 
        cin>>m;
        int a[2*m];
        for(int k=0; k<2*m; k++){
            cin>>a[k];
        }
        sort(a,a+(2*m));
        cout<< (abs(a[0]-a[m-1]))+(abs(a[m]-a[(2*m)-1]))<<endl;
        for(int p=0; p<m; p++){
            cout<<a[p]<<" "<<a[p+m]<<endl;
        }
        
        i++;
    }
    
    
 
}