
#include <iostream>
using namespace std;
int main(){
    int n,a;
    bool luckyno;
    luckyno=false;
    cin>>n;
    for(int i=0; i<=(n/4); i++){
        for(int j=0; j<=(n/7); j++){
            a=(4*i)+(7*j);
            if(a==n){
                for(int k=0; k<i; k++){
                    cout<<"4";
                }
                for(int k=0; k<j; k++){
                    cout<<"7";
                }
                luckyno=true;
                break;
            }
 
           
        }
        if(luckyno){
            break;
            }
    
    }
    if(!luckyno){
        cout<<"-1";
    }
}