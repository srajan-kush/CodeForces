#include<iostream>
#include<unordered_set>
using namespace std;

char toLower(char ch){
    if(ch < 97) return ch - 'A' + 'a';
    return ch;
}

int main(){
    unordered_set<char> se = {'A','O','Y','E','U','I','a','o','y','e','u','i'};

    string s;
    cin >> s;
    for(char& ch: s){
        if(se.find(ch) != se.end()) continue;

        cout<<'.'<<toLower(ch);
    }
    return 0;
}