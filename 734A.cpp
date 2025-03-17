#include<iostream>
using namespace std;

int main(){
    int n,p = 0;
    char a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 'A') p++;
        else p--;
    }
    if(p == 0) cout << "Friendship";
    else if(p > 0) cout << "Anton";
    else cout << "Danik";
    return 0;
}