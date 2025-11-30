#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m;

    vector<int> boys(m);
    for(int i = 0; i < m; i++) cin >> boys[i];

    cin >> n;

    vector<int> girls(n);
    for(int i = 0; i < n; i++) cin >> girls[i];

    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());

    int x = 0, y = 0;
    int pairs = 0;

    while(x < m && y < n){
        if(abs(boys[x] - girls[y]) <= 1){
            pairs++,x++,y++;
        }else if(boys[x] >  girls[y]) y++;
        else x++;
    }

    cout << pairs << endl;

    return 0;
}