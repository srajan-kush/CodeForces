#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    int a,b,c;
    while(n > 0){
        cin >> a >> b >> c;

        if(a + b + c > 1) cnt++;

        n--;
    }
    cout<<cnt;
    return 0;
}