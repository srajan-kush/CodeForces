#include<iostream>
using namespace std;

int main(){
    int a;
    int m,n;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a;

            if(a == 1){
                m = i;
                n = j;
            }
        }
    }
    cout << abs(m - 2) + abs(n - 2);

    return 0;
}