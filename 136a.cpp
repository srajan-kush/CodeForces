#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,m;
    cin >> t;
    vector<int>arr(t,0);
    for(int i = 0; i < t; i++){
       cin >> m;

       arr[m - 1] = i + 1; 
    }

    for(int a : arr) cout << a << " ";
    
    return 0;
}