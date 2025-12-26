#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> e(N);
        for (int i = 0; i < N; i++) {
            cin >> e[i];
        }

        sort(e.begin(), e.end());

        int groups = 0;
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            cnt++;
            if (cnt >= e[i]) {
                groups++;
                cnt = 0;
            }
        }

        cout << groups << "\n";
    }

    return 0;
}
