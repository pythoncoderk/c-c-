#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool t = true;
    char c = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != c) t = false;
    }
    if (t == false) cout << "OK" << endl;
    else cout << "NG" << endl;
}