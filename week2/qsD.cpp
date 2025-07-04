#include <bits/stdc++.h>
 using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int s,t,b,c;
        map <int,int> mp1,mp2;
        cin>>s>>t;
        vector<int> a(s);
 
        for(int k=0; k<s; k++){
            cin>>a[k];
        }
        for (int i=0; i<s; i++) {
            if(mp1.find(a[i])==mp1.end()) mp1[a[i]]=i;
            mp2[a[i]]=i;
        }
        while(t>0){
            cin>>b>>c;
        if(mp1.find(b) != mp1.end() && mp2.find(c) != mp2.end()){
         if(mp1[b]<mp2[c]){
            cout<<"YES\n";
        }
            else cout<<"NO\n";
        }
        else{
        cout<<"NO\n";}
 
             
        t--;
        }
        
        
        n--;
    }}