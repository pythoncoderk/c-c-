#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < 0) {
        cout << abs(b) - abs(a) << endl;
    }
    else {
        if (b < 0) {
            cout << a + abs(b) << endl;
        }
        else {
            cout << a - b << endl;
        }
    }
}