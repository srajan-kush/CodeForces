#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;

    cin >> n >> k;

    string str;
    cin >> str;

    unordered_set<char>se;
    char ch;
    for(int i = 0; i < k; i++){
        cin >> ch;
        se.insert(ch);
    }

    long long cnt = 0;
    long long ans = 0;

    for(int i = 0; i < n; i++){
        if(se.find(str[i]) != se.end()) cnt++;
        else{
            ans += ((cnt * (cnt + 1)) / 2);
            cnt = 0;
        }
    }
    ans += ((cnt * (cnt + 1)) / 2);

    cout << ans << endl;
    
    return 0;
}