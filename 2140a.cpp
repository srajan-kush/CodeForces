#include<bits/stdc++.h>
using namespace std;

int ans_(vector<char>& ans, int n){
    int cnt = 0;
    for(char a : ans) if(a == '0') cnt++;

    int faltu = 0;

    for(int i = 0; i < n; i++){
        if(ans[i] == '0' && i+ 1 > cnt) faltu++; 
    }
    return min(n - faltu, faltu);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int z;
        cin >> z;
        vector<char> arr(z);
       for(int j = 0; j < z; j++){
           cin >> arr[j];
       }
       cout << ans_(arr,z) << endl;
    }
    
    return 0;
}