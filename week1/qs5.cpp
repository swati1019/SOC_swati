#include <iostream>
#include <stack>
using namespace std;
int main() {
string s,t;
cin>>s>>t;
stack<char> st;
for (char c : s) st.push(c);
string result = "";
while (!st.empty()) {
result += st.top();
st.pop();
}
if(t==result){
    cout<<"YES";
}
else cout<<"NO";
}