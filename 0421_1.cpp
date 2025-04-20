#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n < m) {
        cout << 1 << endl;

    }
    else {
        if (n % m == 0) {
            cout << n / m << endl;
        }
        else {
            cout << (n / m) + 1 << endl;
        }
    }

}