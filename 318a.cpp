#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,m;
    cin >> t >> m;

    long long o = (t / 2) + (t % 2);
    
    if(m > o){
        m = m - o;
        cout << 2*m;
        return 0;
    }

    cout << 2*m - 1;

    return 0;
}