#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c, d, e, f, g, h, i, j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    int count = 0;
    vector<string> v = {
        a, b, c, d, e, f, g, h, i, j
    };
    for (int ii = 0; ii < v.size(); ii++) {
        if (v[ii] == "W") {
            count++;
        }
    }
    if (count >= 5) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}