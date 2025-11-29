#include<bits/stdc++.h>
using namespace std;

int solve(string& s){
    unordered_map<char,int> mp;
    int l = 0;
    int ans = INT_MAX;
    for(int r = 0; r < s.size(); r++){
        mp[s[r]]++;
        while(mp.size() == 3){
            mp[s[l]]--;
            if(mp[s[l]] == 0) mp.erase(s[l]);
            ans = min(ans,r - l + 1);
            l++;
        }
    }
    return ans == INT_MAX ? 0 : ans;
}

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}