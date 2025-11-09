#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ans = 0;
    cin >> t;

    string st;
    char prev = '2';
    for(int i = 0; i < t; i++){
       cin >> st;
       if(st[0] == prev || prev == '2') ans++;
       prev = st[1];
    }

    cout << ans;
    
    return 0;
}