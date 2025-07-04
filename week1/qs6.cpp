#include <vector>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    c=0;
    vector<char> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<s.size()-1;){
        if(s[i]==s[i+1]){
            s.erase(s.begin() + (i+1));
            c=c+1;
        }
        else{
            i++;}
    }
    cout<<c;
}