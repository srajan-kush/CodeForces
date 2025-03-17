#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') cnt1++;
        else if(s[i] == '2') cnt2++;
        else if(s[i] == '3') cnt3++;
        else continue;
    }

    while(cnt1 > 0){
        cout<<'1';
        cnt1--;
        if(cnt1 + cnt2 + cnt3 > 0) cout << '+';
    }
    while(cnt2 > 0){
        cout<<'2';
        cnt2--;
        if(cnt1 + cnt2 + cnt3 > 0) cout << '+';
    }
    while(cnt3 > 0){
        cout<<'3';
        cnt3--;
        if(cnt1 + cnt2 + cnt3 > 0) cout << '+';
    }

    return 0;
}