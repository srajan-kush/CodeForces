#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int>v(t,0);
    for(int i = 0; i < t; i++) cin >> v[i];

    int mxN = v[0], mxI = 0;
    int miN = v[0], miI = 0;


    for(int i = 1; i < t; i++){
        if(v[i] > mxN){
            mxN = v[i];
            mxI = i;
        }

        if(v[i] <= miN){
            miN = v[i];
            miI = i;
        }
    }

    t = mxI + (t - miI - 1);

    if(miI < mxI) t -= 1;

    cout << t;

    return 0;
}