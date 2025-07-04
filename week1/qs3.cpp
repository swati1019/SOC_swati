#include <iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;
bool unique(int n){
    string y= to_string(n);
    for(int i=0; i<y.size(); i++){
        for(int j=i+1; j<y.size(); j++){
            if(y[i]==y[j]) return false;
        }
    }
    return true;
}
int main(){
    int p;
    cin>>p;
    p=p+1;
    while(!unique(p)){
        p++;
    }
    cout<<p;
}