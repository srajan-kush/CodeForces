#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>& arr, int n, int sum){
    if(n == 0) return sum % 360 == 0;

    return solve(arr,n - 1,sum + arr[n - 1]) || solve(arr,n - 1,sum - arr[n - 1]);
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    solve(arr,n,0) ? cout << "YES" : cout << "NO";
    return 0;
}