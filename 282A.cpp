#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n > 0){
        string s;
        cin >> s;

        for(char& c : s){
            if(c == '+'){
                cnt++;
                break;
            }else if(c == '-'){
                cnt--;
                break;
            }
        } 
        n--;
    }
    cout << cnt;
    return 0;
}