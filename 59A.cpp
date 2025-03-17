#include <iostream>
#include <string> // Include this for string
using namespace std;

int main() {
    string s;
    cin >> s;

    int lCnt = 0, uCnt = 0;

    for (char& ch : s) {
        if (ch >= 'a' && ch <= 'z') 
            lCnt++;
        else if (ch >= 'A' && ch <= 'Z') 
            uCnt++;
    }

    if (lCnt >= uCnt) { 
        // Convert to lowercase
        for (char& ch : s) {
            if (ch >= 'A' && ch <= 'Z') 
                cout << (char)(ch + 'a' - 'A');
            else 
                cout << ch;
        }
    } else {
        // Convert to uppercase
        for (char& ch : s) {
            if (ch >= 'a' && ch <= 'z') 
                cout << (char)(ch + 'A' - 'a');
            else 
                cout << ch;
        }
    }

    return 0;
}
