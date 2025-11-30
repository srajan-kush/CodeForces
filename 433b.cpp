#include<bits/stdc++.h>
using namespace std;

#define ll long long

void preSum(vector<ll>& arr, ll n){
    for(ll i = 1; i < n; i++){
        arr[i] += arr[i - 1];
    }
}

int main(){
    ll n,m,a,b,c;
    cin >> n;

    vector<ll> arr(n);

    for(ll i = 0; i < n; i++) cin >> arr[i];

    vector<ll> prr(arr.begin(),arr.end());
    sort(prr.begin(),prr.end());

    preSum(arr,n),preSum(prr,n);

    cin >> m;

    while(m--){
        cin >> a >> b >> c;
        if(a == 1) (b - 2 >= 0) ? cout << arr[c - 1] - arr[b - 2] << endl : cout << arr[c - 1] << endl;
        else  (b - 2 >= 0) ? cout << prr[c - 1] - prr[b - 2] << endl : cout << prr[c - 1] << endl;
    }
    return 0;
}