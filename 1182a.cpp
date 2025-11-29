#include <bits/stdc++.h>
using namespace std;

string bigPow2(long long k){
    string s = "1";
    for(long long i = 0; i < k; i++){
        int carry = 0;
        for(int j = s.size()-1; j >= 0; j--){
            int d = (s[j]-'0') * 2 + carry;
            s[j] = char(d % 10 + '0');
            carry = d / 10;
        }
        if(carry) s.insert(s.begin(), char(carry + '0'));
    }
    return s;
}

int main(){
    long long t;
    cin >> t;

    if(t % 2 == 0){
        long long k = t/2;
        cout << bigPow2(k);
    } else {
        cout << 0;
    }
    return 0;
}
