#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    vector<long long>arr(t);
    for(long long i = 0; i < t; i++){
       cin >> arr[i];
    }
    
    long long g = arr[0];
    for(long long i = 0; i < t; i++){
       g = __gcd(g,arr[i]);
    }

    cout << g * (t - 1);

    return 0;
}