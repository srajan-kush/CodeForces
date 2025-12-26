#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a, b;
    string s1, s2;
    cin >> t;

    while(t--){
        
        cin >> a >> b;
        cin >> s1 >> s2;

        vector<vector<int>> arr1(a + 1,vector<int>(26,0));
        vector<vector<int>> arr2(a + 1,vector<int>(26,0));

        for(int i = 0; i < a; i++){
            arr1[i + 1] = arr1[i];
            arr2[i + 1] = arr2[i];
            arr1[i + 1][s1[i] - 'a']++;
            arr2[i + 1][s2[i] - 'a']++;
        }

        int q1,q2;
        for(int i = 0; i < b; i++){
            cin >> q1 >> q2;
            int ans = 0;
            for(int j = 0; j < 26; j++){
                int c = (arr1[q2][j] - arr1[q1 - 1][j]);
                int d = (arr2[q2][j] - arr2[q1 - 1][j]);
                ans += abs(c - d);
                // cout << abs(c) << abs(d) << "$";
            }
            // cout << '\n';
            cout << ans / 2 << endl;
        }
    }
    
    return 0;
}

