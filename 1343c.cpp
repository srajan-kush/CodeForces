#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vch vector<char>
#define vst vector<string>
#define umpii unordered_map<int, int>
#define umpich unordered_map<int, char>
#define umpchi unordered_map<char, int>
#define umpsti unordered_map<string, int>
#define umpist unordered_map<int, string>
#define mpii map<int, int>
#define mpich map<int, char>
#define mpchi map<char, int>
#define mpsti map<string, int>
#define mpist map<int, string>
#define usei unordered_set<int>
#define usech unordered_set<char>
#define usest unordered_set<string>
#define sei set<int>
#define sech set<char>
#define sest set<string>
#define all(x) (x).begin(),(x).end()
#define forlp(n) for(int i = 0; i < n; i++)
#define forlp0(x) for(int i = 0; i < (x).size(); i++)
#define forlp1(x,i) for(int i = 0; i < (x).size(); i++)
#define forlp2(x,i,j) for(int i = j; i < (x).size(); i++)
#define deci(x,y) fixed << setprecision(y) << (x)

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define debug(x) cerr << #x << " = " << x << "\n";
#define pb push_back
#define ff first
#define ss second

const ll INF = 1e18;
const int MOD = 1e9+7;
const ll NEG_INF = -4e18;

vector<vector<vector<long long>>> dp;

ll solve(vll arr,int n,int longSq, int prev){

    if(longSq == 0) return 0;
    if(n == 0) return NEG_INF;

    if(dp[n][longSq][prev + 1] != LLONG_MIN) return dp[n][longSq][prev + 1];
    
    int curr = (arr[n - 1] > 0) ? 1 : 0; 

    if(prev == -1 || (prev != curr)) return dp[n][longSq][prev + 1] = max(arr[n - 1] + solve(arr,n - 1,longSq - 1,curr),solve(arr,n - 1,longSq,prev));

    return dp[n][longSq][prev + 1] = solve(arr,n - 1,longSq,prev);
}

int main(){
    fast;

    int t = 1,n,a,b,c;
    cin >> t;
    while(t--){
       cin >> n;
       vll arr(n);
       forlp(n) cin >> arr[i];

       int longSq = 1;
       int prev = (arr[0] > 0) ? 1 : 0;
       forlp(n){
        if((prev == 0 && arr[i] > 0) || (prev == 1 && arr[i] < 0)) longSq++;
        prev = (arr[i] > 0) ? 1 : 0;
       }
        // debug(longSq);
       
       dp.assign(n + 1,vector<vector<ll>>(longSq + 1,vector<ll>(3,LLONG_MIN)));
       cout << solve(arr,n,longSq,-1) << endl;

    }
    return 0;
}