#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string a;
    for(int i = 0; i < t; i++){
       cin >> a;

       int k = 0;
       for(char ch : a){
        if(k >= 0 && ch == '<') k++;
        if(k <= 0 && ch == '>') k--;
        if(ch == '*') break;
       }

       cout << k << endl;
    }
    
    return 0;
}

