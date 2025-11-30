#include<bits/stdc++.h>
using namespace std;

vector<long long> dp;

long long solve(vector<long long>& arr, int i, int n){
    if(i == n - 1) return arr[i];
    if(i >= n) return 0;


    long long take1 = arr[i] + solve(arr, i + 1, n);
    arr[i + 1] = -1 * arr[i + 1];
    long long take2 = solve(arr, i + 1, n) - arr[i];
    arr[i + 1] = -1 * arr[i + 1];
    return max(take1, take2);
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> arr(n);
        dp.assign(n + 1, -1);
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, 0, n) << endl;
    }
    return 0;
}
