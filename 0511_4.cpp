#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if ((i + 1) % 10 == 0) {
            cout << s[i];
            cout << endl;

        }
        else {
            cout << s[i];
        }
    }
}