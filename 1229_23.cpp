#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int w = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W') w++;
    }
    if (w >= 5) cout << "OK" << endl;
    else cout << "NG" << endl;
}