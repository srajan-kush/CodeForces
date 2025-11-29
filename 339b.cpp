#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n, m;
  cin>>n>>m;

  long long p1 = 1, p2, steps = 0;
  while(m--){
    cin>>p2;
    if(p2 < p1){
      steps += (n - p1 + p2);
    }
    else{
      steps += (p2 - p1);
    }
    p1 = p2;
  }
  cout<<steps<<endl;

}