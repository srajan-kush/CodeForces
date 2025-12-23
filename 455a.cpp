#include <bits/stdc++.h>
using namespace std;

vector<long long> dp, freq;

long long helper(int n) {
    if (n <= 0) return 0;
    if (dp[n] != -1) return dp[n];

    return dp[n] = n * freq[n] + max(helper(n - 2),helper(n - 3));
}

int main() {
    int t;
    cin >> t;

    vector<int> arr(t);
    int mx = 0;
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    freq.assign(mx + 1, 0);
    for (int x : arr) freq[x]++;

    dp.assign(mx + 1, -1);

    cout << max(helper(mx),helper(mx - 1)) << endl;

    return 0;
}
