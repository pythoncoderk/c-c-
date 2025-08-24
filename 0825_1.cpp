#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x + y >= 13) {
        cout << x + y - 12 << endl;
    }
    else {
        cout << x + y << endl;
    }
}