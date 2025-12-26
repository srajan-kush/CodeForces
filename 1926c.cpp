#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long full = n / 9;     
        long long rem  = n % 9;     

        long long ans = full * 45 + (rem * (rem + 1)) / 2;
        cout << ans << "\n";
    }
    return 0;
}
