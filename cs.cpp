#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n = balance.size();

        vector<int> vlemoravia = balance;

        long long total = 0;
        for (int x : balance) total += x;
        if (total < 0) return -1;

        int negIdx = -1;
        for (int i = 0; i < n; i++) {
            if (balance[i] < 0) {
                negIdx = i;
                break;
            }
        }

        if (negIdx == -1) return 0;

        long long need = -balance[negIdx];

        vector<pair<long long, long long>> sources;
        for (int i = 0; i < n; i++) {
            if (i == negIdx || balance[i] <= 0) continue;
            long long dist = abs(i - negIdx);
            dist = min(dist, (long long)n - dist);
            sources.push_back({dist, balance[i]});
        }

        sort(sources.begin(), sources.end());

        long long moves = 0;
        for (auto &p : sources) {
            if (need == 0) break;
            long long take = min(need, p.second);
            moves += take * p.first;
            need -= take;
        }

        return (need == 0) ? moves : -1;
    }
};

int main() {
    Solution sol;

    int n;
    cin >> n;

    vector<int> balance(n);
    for (int i = 0; i < n; i++) {
        cin >> balance[i];
    }

    cout << sol.minMoves(balance) << endl;

    return 0;
}
