#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, a, b;
    int ans = 0;
    cin >> m >> n >> a >> b;

    if((n * a) > b){
        ans = ((m / n) * b);
        ans += ((m % n) * a) < b ? ((m % n) * a) : b;
    }else{
        ans = m * a;
    }

    cout << ans << endl;
    
    return 0;
}