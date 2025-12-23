#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b,c;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>arr(n);
        long long sum = 0;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx,arr[i]);

            sum += (long long)arr[i];
        }

        while(sum % (long long)mx != 1) mx--;

        cout << mx << endl;

    }
    return 0;
}