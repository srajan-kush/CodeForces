#include<bits/stdc++.h>
using namespace std;

#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    vector<int>arr(t);
    vector<int> brr(t);
    int n;
    for(int i = 0; i < t; i++){
       cin >> n;
       arr[i] = isPrime(n) ? n : 0;
    }

    for(int i = 0; i < t; i++){
        cin >> brr[i];
    }

    priority_queue<int> q;
    int ans = 0;
    for(int i = 0; i < t; i++){
        q.push(arr[i]);
        if(brr[i] == 1){
            ans += q.top();
            q.pop();
        }
    }

    cout << ans << endl;
    
    return 0;
}