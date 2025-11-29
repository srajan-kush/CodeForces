#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin >> n >> l;

    vector<int> arr(n,0);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(),arr.end());

    int maxDis = 2 * max(arr[0], l - arr[n - 1]);

    for(int i = 1; i < n; i++) maxDis = max(maxDis,arr[i] - arr[i - 1]);

    cout << fixed << setprecision(10)  << (long double)(maxDis) / 2 << endl;
    return 0;
}