#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t,n,cd;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> v(n,0);

        for(long long i = 0; i < n; i++) cin >> v[i];

        cd = v[0];
        for(long long i = 1; i < n; i++) cd = __gcd(cd,v[i]);

        long long k = 2;
        while(__gcd(k,cd) != 1 && k <= 1e18) k++;

        if(k <= 1e18) cout << k << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}