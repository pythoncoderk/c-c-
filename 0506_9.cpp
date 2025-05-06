#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (s[i] == s[j] && i != j) {
                ans++;
            }
        }
    }
    if (ans >= 1) {
        cout << "NG" << endl;
    }
    else {
        cout << "OK" << endl;
    }
}