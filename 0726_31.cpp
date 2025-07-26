#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char ch = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (ch != s[i]) {
            cout << "OK" << endl;
            return 0;
        }

    }
    cout << "NG" << endl;
}