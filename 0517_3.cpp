#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, m, l, a, b, c;
    cin >> n >> m >> l >> a >> b >> c;
    double x, y;
    x = l / (n * m);
    y = c / (a * b);
    if (x == y) {
        cout << "DRAW" << endl;
    }
    else if (x < y) {
        cout << n << " " << m << " " << l;

    }
    else {
        cout << a << " " << b << " " << c;
    }
}