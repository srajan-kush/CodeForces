#include<bits/stdc++.h>
using namespace std;

void oddOne(vector<int>& arr, int n){
    vector<int>a(2,0);
    vector<int>b(2,0);
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            b[0]++;
            a[0] = i + 1;
        }else{
            b[1]++;
            a[1] = i + 1;
        }
    }

    if(b[0] == 1) cout << a[0] << endl;
    else cout << a[1] << endl;
}

int main(){
    int t;
    cin >> t;
    vector<int>arr(t);
    for(int i = 0; i < t; i++){
       cin >> arr[i];
    }
    oddOne(arr,t);
    return 0;
}