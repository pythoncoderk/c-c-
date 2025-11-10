#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, c;
    cin >> x >> c;
    double xx = x;
    int ans = 0;

    while (x > 0) {
        if (x * (c / 1000) >= xx) {
            cout << x << endl;
        }
        else {
            x -= 1000;
        }
    }
    cout << 0 << endl;
}