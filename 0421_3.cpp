#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n >= a + b + c) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}