#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

int arrangement(int a, int b){
    return fact(a + b) / (fact(a) * fact(b));
}

int main(){
    string s,t;
    cin >> s >> t;

    int qCnt = 0;
    int orgPos = 0, nPos = 0;

    for(int i = 0; i < s.size();  i++){
        
        orgPos += (s[i] == '+') ? 1 : -1;

        if(t[i] == '+' || t[i] == '-'){
            nPos += (t[i] == '+') ? 1 : -1;
        }else{
            qCnt++;
        }
    }

    if(qCnt == 0){
        if(orgPos - nPos == 0){
            cout << fixed << setprecision(12) << (double)1 << endl;
            // cout << 1;
            return 0;
        }else{
            cout << fixed << setprecision(12) << (double)0 << endl;
            // cout << 2;
            return 0;
        }
    }

    int diff = abs(orgPos - nPos);
    if(diff % 2 != qCnt % 2){
        cout << fixed << setprecision(12) << (double)0 << endl;
        // cout << 3;
        return 0;
    }

    int similar = qCnt - (qCnt - diff) / 2;
    int dissimilar = (qCnt - diff) / 2;
    

    int total_arrangement = arrangement(similar,dissimilar);

    cout << fixed << setprecision(12) << (double)total_arrangement / pow(2,qCnt) << endl;
    // cout << 4;
    
    return 0;
}