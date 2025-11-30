#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin >> n >> m;
    vector<int>arr(n);
    unordered_map<int,int> mp;
    vector<int> dis(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n - 1; i >= 0; i--){
        mp[arr[i]]++;
        dis[i] = mp.size();
    }

    while(m--){
        cin >> a;
        cout << dis[a - 1] << endl;
    }  
    return 0;
}