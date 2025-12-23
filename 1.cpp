#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int fun(vector<vector<int>>& adj,int l, int r, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = l; i <= r; i++){
        int s = 0;
        for(int j : adj[i]){
            if(j <= r && j >= l) s = s^j;
        }
        pq.push(s);
    }
    for(int i = 0; i < k - 1; i++) pq.pop();
    return pq.top();
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n + 1);
        for(int j = 0; j < m; j++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int q;
        cin >> q;
        for(int j = 0; j < q; j++){
            int l , r , k;
            cin >> l >> r >> k;
            cout << fun(adj,l,r,k) << endl;
        }
    }
    return 0;
}