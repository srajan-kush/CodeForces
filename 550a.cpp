#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int p1 = s.find("AB");
    if (p1 != string::npos) {
        int p2 = s.find("BA", p1 + 2);
        if (p2 != string::npos) {
            cout << "YES";
            return 0;
        }
    }

    int q1 = s.find("BA");
    if (q1 != string::npos) {
        int q2 = s.find("AB", q1 + 2);
        if (q2 != string::npos) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
