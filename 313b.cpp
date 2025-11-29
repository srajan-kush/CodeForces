#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t,a,b,ans;
    cin >> s;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans = 0;
        for(int i = a; i < b; i++){
            if(s[i] == s[i - 1]) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}