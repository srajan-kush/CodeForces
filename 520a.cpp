#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    cin >> s;
    
    if(t < 26){
        cout << "NO";
        return 0;
    }

    unordered_set<char> se;
    for(char ch : s){
        se.insert(tolower(ch));
    }

    if(se.size() == 26) cout << "YES";
    else cout << "NO";

    return 0;
}