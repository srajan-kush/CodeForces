#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int n = s.size();
    vector<string> target = {"00","25","50","75"};
    int a = 0, b = 0;
    int cnt = 0;
    for(int i = n - 1; i >= 0; i--){
        if(((s[i] == '0' || s[i] == '5') && a == 1) || ((s[i] == '2' || s[i] == '7') && b == 1)){
            return ((s[i] == '0' || s[i] == '5') && a == 1) ? cnt + b : cnt + a;
        }else if(s[i] == '5'){
            if(b == 1) cnt++;
            else b = 1;
        }
        else if(s[i] == '0') a = 1;
        else cnt++;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
}
