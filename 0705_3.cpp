#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    float c = b * 0.7;
    if (a < c) {
        cout << a << endl;
    }
    else {
        cout << static_cast<int>(c) << endl;
    }
}