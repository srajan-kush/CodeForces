#include<bits/stdc++.h>
using namespace std;


vector<int>dp;

bool solve(int n){
    if(n <= 0) return n == 0;
    if(dp[n] != -1) return dp[n];
    return dp[n] = solve(n - 2020) || solve(n - 2021);
}

int main(){
    int t,n;
    dp.assign(1e6 + 1, -1);
    cin >> t;
    while(t--){
        cin >> n;
        if(solve(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}