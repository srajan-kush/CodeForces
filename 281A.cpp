#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s[0] = (s[0] >= 97)? s[0] + 'A' - 'a' : s[0];

    cout<<s;
    return 0;
}