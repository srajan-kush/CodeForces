#include<bits/stdc++.h>
using namespace std;

void preSum(vector<int>& arr, int n){
    for(int i = 1; i < n; i++){
        arr[i] += arr[i - 1];
    }
}

int main(){
    int n,m,a,b,c;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> prr(arr.begin(),arr.end());
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