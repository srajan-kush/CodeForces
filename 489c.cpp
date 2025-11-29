#include<bits/stdc++.h>
using namespace std;

std::string stMax(std::string a, std::string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]) continue;
        if(a[i] > b[i]) return a;
        return b;
    }
    return a;
}

std::string stMin(std::string a, std::string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]) continue;
        if(a[i] < b[i]) return a;
        return b;
    }
    return a;
}

std::string mxAns = "0", mnAns = ""+58;

std::string solve(std::string ans, int m, int s){
    if(m == 0 && s == 0) return ans;
    if(s < 0) return "0";
    if(m == 1){
        for(int i = 1; i <= 9; i++){
            std::string st = solve(to_string(i) + ans,m - 1,s - i);
            mxAns = stMax(mxAns,st);
            mnAns = stMin(mnAns,st);
        }
    }else{
        for(int i = 0; i <= 9; i++){
            std::string st = solve(to_string(i) + ans,m - 1,s - i);
            mxAns = stMax(mxAns,st);
            mnAns = stMin(mnAns,st);
        }
    }
}

int main(){
    int m,s;
    mxAns = "0", mnAns = ""+58;
    cin >> m >> s;
    std::string ans;
    solve(ans,m,s);
    if(mxAns != "0" && mnAns != "" + 58){
        cout << mxAns << " " << mnAns;
    }
    return 0;
}