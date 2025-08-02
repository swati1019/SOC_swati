#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
 
using namespace std;
 
bool solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string a;
    cin >> a;
    vector<int> dist(n + 2, -1);
    queue<int> q;
 
    dist[0] = 0;
    q.push(0);
    vector<int> next_log(n + 2, -1);
    next_log[n + 1] = n + 1;
    for (int i = n; i >= 1; --i) {
        if (a[i - 1] == 'L') {
            next_log[i] = i;
        } else if (a[i - 1] == 'W') {
            next_log[i] = next_log[i + 1];
        } else { // 'C'
            next_log[i] = -1;
        }
    }
    next_log[0] = next_log[1];
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        int current_k = dist[u];
        if (u + m >= n + 1) {
            if (current_k <= k) {
                return true;
            }
        }
        int max_jump_pos = min(u + m, n);
        for (int v = u + 1; v <= max_jump_pos; ++v) {
            if (a[v - 1] == 'C') {
                continue;
            }
 
            if (a[v - 1] == 'L') {
                int new_k = current_k;
                if (dist[v] == -1 || new_k < dist[v]) {
                    dist[v] = new_k;
                    q.push(v);
                }
            } else if (a[v - 1] == 'W') {
                int next_l = next_log[v];
                if (next_l == -1) {
                    continue;
                }
                int swim_dist = next_l - v;
                int new_k = current_k + swim_dist;
                
                if (new_k <= k) {
                    if (dist[next_l] == -1 || new_k < dist[next_l]) {
                        dist[next_l] = new_k;
                        q.push(next_l);
                    }
                }
            }
        }
    }
    
    return false;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
