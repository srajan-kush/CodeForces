#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, a;
    cin >> t;

    while (t--) {
        cin >> a;

        long long b = sqrtl(a);

        if (b * b == a && isPrime(b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
