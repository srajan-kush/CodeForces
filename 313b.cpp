#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t,a,b,ans = 0;
    cin >> s;
    int n = s.size();
    vector<int>loby(n,0);
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) ans++;
        loby[i] = ans;
    }
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << loby[b - 1] - loby[a - 1] << endl;
    }
    
    return 0;
}