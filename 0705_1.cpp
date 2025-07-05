#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    if (float c = b - ((b * 3) / 10); a > c) {
        c = static_cast<int>(floor(c));
        cout << c << endl;
    }
    else {
        cout << a << endl;
    }
}