#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s = 0;
    cin >> t;
    vector<int>arr(t);
    for(int i = 0; i < t; i++){
       cin >> arr[i];
       s += arr[i];
    }
    
    sort(arr.begin(),arr.end(),[&](int a, int b){
        return a > b;
    });

    int ptr = 0;
    int crsum = 0;
    while(crsum <= (s - crsum)){
        crsum += arr[ptr++];
    }

    cout << ptr;

    return 0;
}