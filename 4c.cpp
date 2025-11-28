#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string a;
    unordered_map<string,int> mp;

    while(t--){
        cin >> a;
        if(mp.find(a) != mp.end()){
            mp[a]++;
            cout << a << mp[a] << endl;
        }else{
            mp[a] = 0;
            cout << "OK" << endl;
        }
    }

    return 0;
}