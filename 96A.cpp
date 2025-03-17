#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cont = 1;
    int maxCnt = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]) cont++;
        else cont = 1;

        maxCnt = max(maxCnt,cont);
    }
    if(maxCnt >= 7) cout << "YES";
    else cout << "NO";

    return 0;
}