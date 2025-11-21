#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        if(i == 0){
            cout << "I hate";
        }else if(i % 2 == 0){
            cout << " that I hate";
        }else{
            cout << " that I love";
        }
    }
    cout << " it";
    return 0;
}