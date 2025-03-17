#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    int sum = 0;
    while(sum < k){
        sum += (n % 10) + 1;
        n /= 10;
    }
    if(sum > k) n = n*10 + (sum - k - 1);

    cout << n;

    return 0;
}