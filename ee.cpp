#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S, L;
    cin >> N >> S >> L;

    int M, K, P;
    cin >> M >> K >> P;

    int R = N * (S / P) * K;

    for(int query = 0; query < 5; query++){
        int Q;
        cin >> Q;

        vector<array<int,4>> flows(Q);
        for(int i = 0; i < Q; i++){
            cin >> flows[i][0] >> flows[i][1]
                >> flows[i][2] >> flows[i][3];
        }

        // ---- OXC topology ----
        for(int m = 0; m < M; m++){
            for(int i = 0; i < R; i++){
                cout << -1;
                if(i + 1 < R) cout << " ";
            }
            cout << "\n";
        }

        // ---- Routing ----
        for(int i = 0; i < Q; i++){
            int spineA = 0;
            int linkA  = 0;
            int oxc    = 0;
            int spineB = 0;
            int linkB  = 0;

            cout << spineA << " "
                 << linkA  << " "
                 << oxc    << " "
                 << spineB << " "
                 << linkB  << "\n";
        }
    }
    return 0;
}
