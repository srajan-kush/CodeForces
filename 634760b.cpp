#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int>arr(t);
    for(int i = 0; i < t; i++){
       cin >> arr[i];
    }

    int cnt = 0;
    for(int i = 0; i < t; i++){
        int sum = 0;
        for(int j = i; j < t - 1; j++){
            sum += arr[j];
            if(sum == arr[j + 1]){
                sum += (t - arr[j]);
                arr[j] = t;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    
    return 0;
}