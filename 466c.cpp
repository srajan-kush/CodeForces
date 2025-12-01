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

void solve(vll& arr, int n, ll sum){
    int l = 0, r = n - 1;
    ll lSum = 0, rSum = 0;

    while(l <= r && arr[l] == 0) l++;
    while(l <= r && arr[r] == 0) r--;
    
    while(l <= r && lSum != sum) lSum += arr[l++];
    while(l <= r && rSum != sum) rSum += arr[r--];

    if(l >= r){
        cout << 0 << endl;
        return;
    }
    int cnt = 1;

    int il = l, ir = r;

    while(l < ir){
        lSum += arr[l++];
        if(lSum == sum) cnt++;
    }

    while(r > il){
        rSum += arr[r--];
        if(rSum == sum) cnt++;
    }

    cout << cnt << endl;
    return;
}

int main(){
    fast;

    ll t = 1,n,a,b,c;
    //cin >> t;
    while(t--){
       cin >> n;
       vll arr(n);
       ll sum = 0;
       forlp(n){
        cin >> arr[i];
        sum += arr[i];
       }
       if(n <= 3 || sum % 3 != 0){
        cout << 0 << endl;
        return 0;
       }

       sum /= 3;

       solve(arr,n,sum);

    }
    return 0;
}