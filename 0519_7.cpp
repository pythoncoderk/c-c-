#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    if ((a + b + c + d + e + f + g) / 7 >= h) {
        cout << "pass" << endl;
    }
    else {
        cout << "failure" << endl;
    }
}