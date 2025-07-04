#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        bool f=false;
        int l,d;
        cin>>l;
        d=1;
        string s;
        cin>>s;
        while(d<=l){
            if(l%d==0){
                int c=0;
                string sub=s.substr(0,d);
                string ns="";
                for(int i=0; i<l/d; i++){
                    ns+=sub;
                }
                for(int j=0; j<l; j++){
                    if(s[j]!=ns[j]) c++;
                    if(c<=1) f=true;
                    if(c>1) f=false;
                }
 
            }
            if(f) {
                cout<<d<<endl;
                break;
            }
            if(l%d==0){
                int c=0;
                string sub=s.substr(l-d,d);
                string ns="";
                for(int i=0; i<l/d; i++){
                    ns+=sub;
                }
                for(int j=0; j<l; j++){
                    if(s[j]!=ns[j]) c++;
                    if(c<=1) f=true;
                    if(c>1) f=false;
                }
 
            }
            if(f) {
                cout<<d<<endl;
                break;
            }
            
            d++;
        }
        n--;
    }
}