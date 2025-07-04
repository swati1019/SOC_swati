
#include <iostream>
using namespace std;
int main(){
    int n,p,c,y;
    y=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin >>p>>c;
        if(p<c-1){
            y=y+1;
        }
 
    }
    cout<<y;
}