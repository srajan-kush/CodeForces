#include<iostream>
#include<set>
using namespace std;

int main(){
    set<char> se;

    string s;
    cin >> s;

    for(char& ch: s) se.insert(ch);

    if(se.size() % 2) cout<< "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}