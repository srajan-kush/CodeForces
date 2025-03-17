#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,p;
    cin >> s >> p;
    reverse(s.begin(),s.end());
    s = (s == p)?"YES":"NO";
    cout << s;
    return 0;
}