#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    vector<int> child;
}node;

int main(){
    int n,a,b;
    cin >> n;
    vector<node> all(n);

    for(int i = 0; i < n; i++){
        cin >> a;
        all[i].val = a;
    }

    for(int i = 0; i < n - 1; i++){
        cin >> a >> b;
        all[a - 1].child.push_back(b - 1);
    }
    
}