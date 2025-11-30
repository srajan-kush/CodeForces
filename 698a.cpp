#include <bits/stdc++.h>
using namespace std;

int dp[200005][3]; 

int solve(vector<int>& arr, int i, int n, int prev){
    if(i == n) return 0;

    if(dp[i][prev] != -1) return dp[i][prev];

    int ans = 1e9;

    ans = min(ans, 1 + solve(arr, i + 1, n, 0));

    if((arr[i] == 1 || arr[i] == 3) && prev != 1){
        ans = min(ans, solve(arr, i + 1, n, 1));
    }

    if((arr[i] == 2 || arr[i] == 3) && prev != 2){
        ans = min(ans, solve(arr, i + 1, n, 2));
    }

    return dp[i][prev] = ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    memset(dp, -1, sizeof(dp));

    cout << solve(arr, 0, n, 0) << endl;
    return 0;
}
