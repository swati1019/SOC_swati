#include <bits/stdc++.h>
using namespace std;
int main(){
int l;
cin>>l;
while(l>0){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    vector<vector<int>> b(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
        }
    
    }
    set<vector<int>> rows_a,rows_b,columns_a,columns_b;
    
    for(int i=0; i<n; i++){
        vector<int> ta=a[i];
        vector<int> tb=b[i];
        sort(ta.begin(),ta.end());
        sort(tb.begin(),tb.end());
        rows_a.insert(ta);
        rows_b.insert(tb);
    }
    for(int j = 0; j < m; j++) {
        vector<int> ta;
        vector<int> tb;
        for(int i = 0; i < n; i++){
            ta.push_back(a[i][j]);
            tb.push_back(b[i][j]);
        }
        sort(ta.begin(), ta.end());
        sort(tb.begin(),tb.end());
        columns_a.insert(ta);
        columns_b.insert(tb);
    }
 
    if(rows_a==rows_b && columns_a==columns_b) cout<<"YES\n";
    else cout<<"NO\n";
    l--;
}
}