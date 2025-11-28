#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,i;
    string n,x,y,z;
    cin >> t;
    
    while(t--){
        cin >> n;
        cin >> a >> b;

        i = 0;
        z = n;
        while(i < (a - 1)){
            next_permutation(z.begin(),z.end());
            i++;
        }
        x = z;

        i = 0;
        z = n;
        while(i < (b - 1)){
            next_permutation(z.begin(),z.end());
            i++;
        }
        y = z;

        int sim = 0;
        for(i = 0; i < x.size(); i++){
            if(x[i] == y[i]) sim++;
        }

        cout << sim << "A" << x.size() - sim << "B" << endl;
    }
    
    return 0;
}