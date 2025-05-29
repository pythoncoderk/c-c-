#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, x;
    cin >> r >> x;
    if (r >= 1600 && r <= 2999 && x == 1) {
        cout << "Yes" << endl;

    }
    else if (r >= 1200 && r <= 2399 && x == 2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }



}