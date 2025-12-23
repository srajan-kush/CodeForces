#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // If sum is odd → impossible
    if (sum % 2) {
        cout << -1 << "\n";
        return;
    }

    long long half = sum / 2;

    // Try if we can solve in 1 operation (b = a)
    long long prefix = 0;
    for (int i = 0; i < n - 1; i++) {
        prefix += a[i];
        if (prefix == half) {
            cout << 1 << "\n";
            for (int j = 0; j < n; j++) cout << a[j] << " ";
            cout << "\n";
            return;
        }
    }

    // Otherwise, solve in 2 operations
    cout << 2 << "\n";

    // First operation: construct b such that total(b) = half
    vector<long long> b(n, 0);
    long long remaining = half;
    for (int i = 0; i < n && remaining > 0; i++) {
        long long take = min(a[i], remaining);
        b[i] = take;
        remaining -= take;
    }

    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << "\n";

    // Second operation: subtract rest (a-b)
    for (int i = 0; i < n; i++) cout << a[i] - b[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
