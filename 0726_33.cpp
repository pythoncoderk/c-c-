#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a * b < 10000) {
        cout << a * b << endl;
    }
    else {
        cout << "NG" << endl;
    }
}