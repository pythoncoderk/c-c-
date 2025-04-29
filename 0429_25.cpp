#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n > a) {
        cout << "Yes" << endl;
        }
    else {
        if (m >= b) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}