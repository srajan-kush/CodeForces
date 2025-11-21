#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin >> t;
    vector<int>arr(t);
    for(int i = 0; i < t; i++){
       cin >> a >> b;
       arr[i] = (a % b == 0) ? 0 : (b - (a % b));
    }

    for(int i = 0; i < t; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}