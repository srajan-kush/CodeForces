#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a;
    cin >> t;

    double m = 0.0;

    for (int i = 0; i < t; i++) {
        cin >> a;
        m += (double)a;
    }

    cout << fixed << setprecision(12) << (m / t);

    return 0;
}
