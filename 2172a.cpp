#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec(3,0);
    cin >> vec[0] >> vec[1] >> vec[2];

    sort(vec.begin(),vec.end());

    if(vec[2] - vec[0] >= 10){
        cout << "check again";
        return 0;
    }

    cout << "final " << vec[1];
    return 0;
}