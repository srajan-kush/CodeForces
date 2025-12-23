#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
#define vi vector<int>

void solve() {
    int n;
    if (!(cin >> n)) return;
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (n <= 1) {
        cout << 0 << endl;
        return;
    }
    ll total_diff = 0;
    for (int i = 0; i < n - 1; i++) {
        total_diff += abs(arr[i+1] - arr[i]);
    }

    ll ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        ll current_ans = total_diff;

        if (i == 0) {
            current_ans -= abs(arr[1] - arr[0]);
        } 
        else if (i == n - 1) {
            current_ans -= abs(arr[n-1] - arr[n-2]);
        } 
        else {
            current_ans -= abs(arr[i] - arr[i-1]);
            current_ans -= abs(arr[i+1] - arr[i]);
            current_ans += abs(arr[i+1] - arr[i-1]);
        }

        ans = min(ans,current_ans);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}