#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (c / (a * b) == f / (d * e)) {
        cout << "DRAW" << endl;
    }
    else if (c / (a * b) < f / (d * e)) {
        cout << a << " " << b << " " << c;
    }
    else {
        cout << d << " " << e << " " << f;
    }
}