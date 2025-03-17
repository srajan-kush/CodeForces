#include<iostream>
using namespace std;

int main(){
    int x =0, y = 0, z = 0;
    int vec;
    cin >> vec;

    int a , b, c;
    while(vec > 0){
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
        vec--;
    }
    if(x != 0 || y != 0 || z != 0) cout << "NO";
    else cout << "YES";
    return 0;
}