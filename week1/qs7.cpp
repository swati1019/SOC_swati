#include <iostream>
using namespace std;
int main(){
    int m[5][5];
    int i=0;
    int j=0;
    int c=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>m[i][j];
        }
    }
    bool found=false;
    for(int k=0; k<5; k++){
        for(int l=0; l<5; l++){
            if(m[k][l]==1){
                found=true;
                i=i+k;
                j=j+l;
                break;
            }
        }
        if(found){
            break;
         }
      
    }
    if((i>2 && j>2) || (i>2 && j==2)){
        while(i>2){
            i--;
            c++;
        }
        while(j>2){
            j--;
            c++;
        }
    }
    else if((i>2 && j<2)||(i==2 && j<2)){
        while(i>2){
            i--;
            c++;
        }
        while(j<2){
            j++;
            c++;
        }
    }
    else if((i<2 && j<2)||(i<2 && j==2)){
        while(i<2){
            i++;
            c++;
        }
        while(j<2){
            j++;
            c++;
        }
 
    }
    else if((i<2 && j>2) || (i==2 && j>2)){
        while(i<2){
            i++;
            c++;
        }
        while(j>2){
            j--;
            c++;
        }
    }
    else c=0;
    cout<<c;
 
}