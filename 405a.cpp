#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> vec(t,0);

    for(int i = 0; i < t; i++){
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());

    for(int i = 0; i < t; i++){
        cout << vec[i] << " ";
    }

    return 0;
}