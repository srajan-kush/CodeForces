#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,a;
    cin >> k;
    vector<int>arr(4,0);
    for(int i = 0; i < k; i++){
       cin >> a;
       arr[a - 1]++;
    }

    int t = 0;
    t += arr[3];
    arr[3] = 0;

    int m = min(arr[2],arr[0]);

    t += m;
    arr[2] -= m; // } may be kuch bache honge
    arr[0] -= m; // } may be kuch bache honge

    t += arr[1] / 2;
    arr[1] %= 2;  // may be remainig 1;

    t += arr[2];
    arr[2] = 0;

    if(arr[1] == 1){
        t += 1;
        arr[1] = 0;
        arr[0] -= 2;

        if(arr[0] <= 0) arr[0] = 0;
    }

    t += (arr[0] % 4 == 0) ? (arr[0] / 4) : (arr[0] / 4) + 1;

    cout << t << endl;

    return 0;
}