#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "", r;
        for(int i = 0; i < n; i++){
            cin >> r;
            if(s.empty()) {
                s = r;
            } else {
                if(r + s < s + r)
                    s = r + s;
                else
                    s = s + r;
            }
        }
        cout << s << "\n";
    }
    return 0;
}
