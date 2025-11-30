#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int cnt = 0,i = 0;
        while(i < n - 2){
            if(i + 5 <= n && s.substr(i,5) == "mapie"){
                i += 5;
                cnt++;
            }else if(i + 3 <= n && (s.substr(i,3) == "map" || s.substr(i,3) == "pie")){
                i += 3;
                cnt++;
            }else i++;
        }

        cout << cnt << endl;
    }
    return 0;
}