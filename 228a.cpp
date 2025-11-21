#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> se;
    int a;
    for(int i = 0; i < 4; i++){
        cin >> a;
        se.insert(a);
    }

    cout << 4 - se.size();
    
    return 0;
}