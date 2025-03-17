#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a;
    int ans = 0;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > m) ans += 2;
        else ans += 1;
    }

    cout << ans;
    return 0;
}