#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 4 != 0) {
        cout << 365 << endl;
    }
    else {
        if (n % 100 != 0) {
            cout << 366 << endl;
        }
        else {
            if (n % 400 != 0) {
                cout << 365 << endl;
            }
            else {
                cout << 366 << endl;
            }
        }
    }
}