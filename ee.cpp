#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> dp;

pair<int,int> countZeros(int num){
    int zCnt = 0;
    while(num % 10 == 0 && num > 0){
        num /= 10;
        zCnt++;
    }
    return {zCnt, num};
}

pair<int,int> minZero(pair<int,int> a, pair<int,int> b){
    if(a.first < b.first) return a;
    return b;
}

pair<int,int> helper(vector<vector<int>>& arr, int a, int b){
    if(a < 0 || b < 0) return {1e9, 1}; 
    if(a == 0 && b == 0) return countZeros(arr[0][0]);

    if(dp[a][b].first != -1) return dp[a][b];

    auto top = helper(arr, a-1, b);
    auto left = helper(arr, a, b-1);

    auto val = countZeros(arr[a][b]);


    top.first += val.first;
    left.first += val.first;

    return dp[a][b] = minZero(top, left);
}

int main(){
    int t;
    cin >> t;
    vector<vector<int>> arr(t, vector<int>(t));
    for(int i = 0; i < t; i++){
       for(int j = 0; j < t; j++){
           cin >> arr[i][j];
       }
    }

    dp.assign(t, vector<pair<int,int>>(t, {-1,-1}));

    cout << helper(arr, t-1, t-1).first << "\n";
    return 0;
}
