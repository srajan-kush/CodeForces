#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,m,n,a;
    cin >> t;
    
    unordered_set<int> se;

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> a;
        se.insert(a);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> a;
        se.insert(a);
    }

    if(se.size() == t) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}