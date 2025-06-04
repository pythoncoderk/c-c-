#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (count(begin(v), end(v), s) == 0) {
            v[i] = s;
            x++;
        }
    }
    if (x == 4) {
        cout << "Four" << endl;
    }
    else {
        cout << "Three" << endl;
    }
}