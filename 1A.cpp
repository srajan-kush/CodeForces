#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    long long ans = (long long)((a % c == 0)?(a/c):(a/c) + 1)*(long long)((b % c == 0)?(b/c):(b/c) + 1);
    cout<<ans;
    return 0;
}