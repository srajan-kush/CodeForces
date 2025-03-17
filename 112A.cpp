#include<iostream>
using namespace std;

int helper(string& a, string& b){
    int diff = 'a' - 'A';
    for(int i = 0; i < a.size(); i++){
        if((a[i] - b[i] + diff) % diff == 0) continue;

        if((a[i] + diff) % diff > (b[i] + diff) % diff) return 1;
        else return -1;
    }
    return 0;
}

int main(){
    string a,b;
    cin >> a >> b;
    cout << helper(a,b);
    return 0;
}