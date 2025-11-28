#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;

    // t += "WUB";
    queue<int> q;

    for(int i = 0; i < t.size(); i++){
        if(t.substr(i,3) == "WUB") i += 2;
        else q.push(i);
    }

    int b = -1;
    while(!q.empty()){
        int f = q.front();
        q.pop();

        if(f - 1 == b || b == -1) cout << t[f];
        else cout << " " << t[f] ;

        b = f;
    }
    
    return 0;
}