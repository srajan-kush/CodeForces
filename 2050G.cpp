#include <iostream>
#include <map>
#include <vector>
using namespace std;


void maxComponents(int node, int depth, int& mxDepth, map<int, vector<int>>& adj) {
    mxDepth = max(mxDepth, depth);

    for (int child : adj[node]) {
        maxComponents(child, depth + 1, mxDepth, adj);
    }
}

int main() {
    int n; 
    cin >> n;

    vector<map<int, vector<int>>> graphs(n);

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 1; j < m; j++) {
            int a, b;
            cin >> a >> b;
            graphs[i][a].push_back(b);
        }
    }

    

    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (auto& node : graphs[i]) {
            int mxDepth = 0;
            maxComponents(node.first, 1, mxDepth, graphs[i]);
            ans = max(ans, mxDepth); 
        }
        cout << ans << endl;
    }
    

    return 0;
}
