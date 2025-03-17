#include<iostream>
using namespace std;

void printSort(string s){
    if(s.size() <= 10){
        cout << s;
        return;
    }

    int cnt = s.size() - 2;
    string ans = s[0] + to_string(cnt) + s[s.size() - 1];

    cout << ans;
}

int main(){
    int n;
    cin >> n;
    string s;

    while(n > 0){
        cin >> s;
        printSort(s);
        n--;
        if(n > 0) cout << endl;
    }
    return 0;
}