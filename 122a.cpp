#include<bits/stdc++.h>
using namespace std;

bool islucky(int d){
    if(d == 4 || d == 7) return true;
    return false;
}

bool cil(int t){
    
    while(t != 0){
        if(!islucky(t % 10)) return false;
        t /= 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    
    if(cil(t)){
        cout << "YES";
        return 0;
    }

    for(int i = 1; i < t; i++){
        if(cil(i) && (t % i) == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}