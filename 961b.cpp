#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    long long base = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 1)
            base += a[i];
    }

    long long extra = 0, mx = 0;

    for (int i = 0; i < k; i++) {
        if (t[i] == 0)
            extra += a[i];
    }
    mx = extra;

    for (int i = k; i < n; i++) {
        if (t[i] == 0) extra += a[i];
        if (t[i - k] == 0) extra -= a[i - k];
        mx = max(mx, extra);
    }

    cout << base + mx << endl;
    return 0;
}
