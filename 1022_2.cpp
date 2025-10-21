#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int y = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Y") {
            y++;
        }
    }
    if (y == 0) {
        cout << "Three" << endl;
    }
    else {
        cout << "Four" << endl;
    }
}