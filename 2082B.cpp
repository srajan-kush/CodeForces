#include <iostream>
using namespace std;

int makeitSmall(int x, int n, int m) {
    while (n > 0 && x > 0) {
        x >>= 1;  // Faster division by 2
        n--;
    }

    if (x == 0) return 0;

    int k = min(m, 30);
    x = (x + (1 << k) - 1) >> k;  // Round up after m shifts

    return x;
}

int makeitLarge(int x, int n, int m) {
    while (n > 0 && x > 0 && (x & 1) == 0) {  
        x >>= 1;  // Remove power of 2 first
        n--;
    }

    if (x == 0) return 0;

    int k = min(m, 30);
    x = (x + (1 << k) - 1) >> k;  // Round up after m shifts

    while (n > 0 && x > 0) {  
        x >>= 1;
        n--;
    }

    return x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        cout << makeitSmall(x, n, m) << " ";
        cout << makeitLarge(x, n, m) << endl;
    }

    return 0;
}