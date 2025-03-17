#include<iostream>
#include<set>
using namespace std;

bool isAlldigitDiff(int number){
    set<int>se;
    while(number > 0){
        se.insert(number % 10);
        number /= 10;
    }
    return se.size() == 4;
}

int main(){
    int n; 
    cin >> n;
    n += 1;

    while(!isAlldigitDiff(n)) n++;

    cout << n;

    return 0;
}