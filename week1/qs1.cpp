#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
    for(int i=0; i<str1.size(); i++){
        if('A' <= str1[i] && str1[i]<= 'Z'){
            str1[i]= str1[i]+('a'-'A');
        }
        if('A' <= str2[i] && str2[i]<= 'Z'){
            str2[i]= str2[i]+('a'-'A');
        }
    }
    if(str1>str2){
        cout<<"1";
    }
    else if (str1<str2){
        cout<<"-1";
    }
    else cout<<0;
}