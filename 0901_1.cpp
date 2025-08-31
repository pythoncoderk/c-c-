#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m == 1) {
        if (n >= 1600 && n <= 2999) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        if (n >= 1200 && n <= 2399) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}