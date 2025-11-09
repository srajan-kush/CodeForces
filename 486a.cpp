#include<iostream>


int main(){
    long long t;
    long long e,o;
    std::cin >> t;
    
    e = t / 2;
    o = (t / 2) + (t % 2);

    e = e * (e + 1);
    o = o * o;

    std::cout << e - o;

    return 0;
}