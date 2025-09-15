#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || c + b == a || (a == b and b == c)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}