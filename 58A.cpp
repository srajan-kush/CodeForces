#include<iostream>
using namespace std;

bool helper(string& s){
    string cmp = "hello";
    int cnt = 0;
    for(char ch: s){
        if(ch == cmp[cnt]){
            cnt++;
            if(cmp[cnt] == '\0') return true;
        }
    }
    return cmp[cnt] == '\0';
}

int main(){
    string s;
    cin >> s;

    s = helper(s)?"YES":"NO";
    
    cout << s;
    return 0;
}