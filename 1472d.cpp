#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,a,b,c;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long>arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end(),[&](long long& a, long long& b){ return a > b; });

        long long aliceScore = 0, bobScore = 0;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0) aliceScore += (arr[i] % 2 == 0) ? arr[i] : 0;
            else bobScore += (arr[i] % 2 == 1) ? arr[i] : 0;
        }

        if(aliceScore == bobScore) cout << "Tie" << endl;
        else if(aliceScore > bobScore) cout << "Alice" << endl;
        else cout << "Bob" << endl;

    }
    return 0;
}