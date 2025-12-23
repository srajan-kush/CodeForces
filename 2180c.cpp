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

int main(){
    fast;

    int t = 1,a,b,c;
    cin >> t;
    while(t--){
        vector<int>ans;
       cin >> a >> b;
       if(b % 2 == 1){
        for(int i = 0; i < b; i++){
            cout << a << " ";
        }
       }else{
        cout << 0 << " ";
        for(int i = 0; i < b-1; i++){
            cout << a << " ";
        }
       }
       cout << '\n';
    }
    return 0;
}