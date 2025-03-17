#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    long long sum = ((long long)a * (long long)c * (long long)(c + 1)) / 2;
    long long ans = ((sum - (long long)b) > 0)?(sum - (long long)b): 0;
    cout << ans;

    
    return 0;
}