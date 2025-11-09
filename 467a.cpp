#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,ans = 0;
    cin >> t;
    for(int i = 0; i < t; i++){
       cin >> a >> b;
       if(b - a >= 2) ans++;
    }

    cout << ans;
    
    return 0;
}