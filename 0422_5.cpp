#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x, y;
    x = m / 30;
    y = m % 30;
    if (y != 0) {
        cout << (x + 1) * n << endl;

    }
    else {
        cout << x * n << endl;
    }

}