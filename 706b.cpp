#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int l, int r, int n){

    while(l <= r){
        int m = l + (r - l) / 2;
        if(arr[m] <= n) l = m + 1;
        else r = m - 1;
    }

    cout << l << endl;
}

int main(){
    int n,m,a;
    cin >> n;
    vector<int>arr(n,0);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(),arr.end());

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> a;
        solve(arr, 0, n - 1, a);
    }
    return 0;
}