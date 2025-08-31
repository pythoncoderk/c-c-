#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, x;
    cin >> r >> x;
    if (r >= 1600 && r <= 2999) {
        if (x == 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

    }
    else {
        if (r >= 1200 && r <= 2399) {
            if (x == 2) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }
}