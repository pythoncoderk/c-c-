#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 0 && (x & (x - 1)) == 0) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}