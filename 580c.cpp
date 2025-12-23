#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> hasCat;
vector<vector<int>> adj;
int ans = 0;

void dfs(int node, int parent, int consecutive) {
    if (hasCat[node]) consecutive++;
    else consecutive = 0;

    if (consecutive > m) return;

    bool isLeaf = true;
    for (int child : adj[node]) {
        if (child == parent) continue;
        isLeaf = false;
        dfs(child, node, consecutive);
    }

    if (isLeaf) ans++;
}

int main() {
    cin >> n >> m;
    hasCat.resize(n+1);
    adj.resize(n+1);

    for (int i = 1; i <= n; i++) cin >> hasCat[i];

    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1, 0);
    cout << ans << "\n";
    return 0;
}
