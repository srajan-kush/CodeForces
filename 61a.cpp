#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    string ans = "";

    for(int i = 0; i < s.size(); i++){
        ans += (s[i] == t[i]) ? "0" : "1";
    }
    cout << ans;
    
    return 0;
}