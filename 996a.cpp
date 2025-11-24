#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    long long ans = 0;

    ans += (t / 100);
    t %= 100;
    ans += (t / 20);
    t %= 20;
    ans += (t / 10);
    t %= 10;
    ans += (t / 5);
    t %= 5;
    ans += t;

    cout << ans;

    return 0;
}