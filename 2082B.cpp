#include <iostream>
using namespace std;

int makeitSmall(int x, int n, int m) {
    while (n > 0) {
        x /= 2;
        n--;
    }
    
    while (m > 0) {
        x = (x + 1) / 2;
        m--;
    }

    return x;
}

int makeitLarge(int x, int n, int m) {
    while (n > 0 && x % 2 == 0) {
        x /= 2;
        n--;
    }

    while (m > 0) {
        x = (x + 1) / 2;
        m--;
    }

    while (n > 0) {
        x /= 2;
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
