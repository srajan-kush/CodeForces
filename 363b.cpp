#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i;
    cin >> n >> t;

    vector<int> arr(n);
    for(i = 0; i < n; i++) cin >> arr[i];

    int currSum = 0;
    for(i = 0; i < t; i++) currSum += arr[i];

    int idx = 0;
    int minSum = currSum;
    for(i = t; i < n; i++){
        currSum = currSum + arr[i] - arr[i - t];
        if(currSum < minSum){
            minSum = currSum;
            idx = i - t + 1;
        }
    }

    cout << idx + 1 << endl;

    return 0;
}