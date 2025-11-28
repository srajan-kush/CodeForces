#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& arr, int st, int b){

    sort(arr.begin(),arr.end(),[&](auto& x, auto& y){
        return x[0] < y[0];
    });

    for(int i = 0; i < b; i++){
        if(st <= arr[i][0]){
            cout << "NO";
            return;
        }else st += arr[i][1];
    }
    cout << "YES";
    return;
}

int main(){
    int a,b;
    cin >> a >> b;
    vector<vector<int>> st(b,vector<int>(2,0));

    for(int i = 0; i < b; i++){
        cin >> st[i][0] >> st[i][1];
    }
    solve(st,a,b);
    return 0;
}