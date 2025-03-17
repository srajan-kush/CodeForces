#include<iostream>
#include<vector>
using namespace std;

bool isHard(vector<int>&a){
    for(int& val: a){
        if(val == 1) return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    string ans = isHard(a)?"HARD":"EASY";
    cout << ans;

    return 0;
}