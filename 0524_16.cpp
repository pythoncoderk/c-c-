#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count_w = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'W') {
            ++count_w;
        }

    }
    if (count_w >= 5) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}