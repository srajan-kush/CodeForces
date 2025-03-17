#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    for(int i = 0; i < m; i++){
        for(int i = 1; i < n; i++){
            if(s[i] == 'G' && s[i - 1] == 'B'){
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }

    cout << s;

    return 0;
}