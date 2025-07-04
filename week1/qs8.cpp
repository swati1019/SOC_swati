#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<char> q(n);
    for(int i=0; i<n; i++){
        cin>>q[i];
    }
    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(q[j]=='B'&& q[j+1]=='G'){
                q[j]='G';
                q[j+1]='B';
                j=j+1;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<q[i];
    }
 
