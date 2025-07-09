#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, h, m;
    cin >> s >> t >> h >> m;
    if (s > h) {
        cout << "Yes" << endl;
    }
    else if (s == h) {
        if (t >= m) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
}