#include<bits/stdc++.h>
using namespace std;

int minCapacity(int n,vector<vector<int>>&passengers){
    int ans = 0;
    int pessangerInside = 0;
    for(int i = 0; i < n; i++){
        pessangerInside += (passengers[i][1] - passengers[i][0]);
        ans = max(ans,pessangerInside);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>>passengers;
    vector<int>plateform(2);

    for(int i = 0; i < n; i++){
        cin >> plateform[0] >> plateform[1];
        passengers.push_back(plateform);
    }

    cout << minCapacity(n,passengers);

    return 0;
}