#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, p;
    cin >> x >> p;

    if (x <= p) {
        cout << 0 << endl;
    }
    else {
        cout << x - p << endl;
    }
}