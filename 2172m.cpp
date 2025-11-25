#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>& ans, vector<vector<int>>&adj, vector<int>& types, int n){
    queue<int> q;

    vector<bool> visited(n,false);

    q.push(0);
    visited[0] = true;
    int len = 0;

    while(!q.empty()){
        q.push(-1);

        while(q.front() != -1){
            int a = q.front();
            // cout << a << " ";
            q.pop();
            ans[types[a]] = len;
            for(int i = 0; i < adj[a].size(); i++){
                if(!visited[adj[a][i]]) q.push(adj[a][i]);
                visited[adj[a][i]] = true;
            }
        }
        // cout << '\n';
        len++;
        q.pop();
    }
}

int main(){
    int n,m,k;

    cin >> n >> m >> k;
    int a,b;

    vector<int> types(n,0);
    for(int i = 0; i < n; i++){
        cin >> a;
        types[i] = a - 1;
    }

    vector<vector<int>> adj(n);

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    vector<int> ans(k,0);

    bfs(ans, adj, types,n);

    for(int i = 0; i < k; i++) cout << ans[i] << " ";

    return 0;
}