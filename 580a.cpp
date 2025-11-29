#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = 1;
    int l = 0;
    for(int r = 1; r < n; r++){
        if(arr[r] >= arr[r - 1]) ans = max(ans,r - l + 1);
        else l = r;
    }
    cout << ans << endl;
    return 0;
}