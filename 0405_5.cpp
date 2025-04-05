#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p, w, g, y;
    p = 0;
    w = 0;
    g = 0;
    y = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "P") {
            p = p + 1;
        }
        else if (s == "W") {
            w = w + 1;
        }
        else if (s == "G") {
            g = g + 1;
        }
        else if (s == "Y") {
            y = y + 1;
        }
    }
    if (p == 0 || w == 0 || g == 0 || y == 0) {
        cout << "Three" << endl;
    }
    else {
        cout << "Four" << endl;
    }
}