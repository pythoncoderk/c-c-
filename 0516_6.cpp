#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag01 = 0, flag02 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            flag01++;
        }
        else if (s[i] == '_') {
            flag02++;
        }
    }
    if (flag02 >= flag01) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                cout << "_";
            }
            else {
                cout << s[i];
            }
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '_') {
                cout << '-';
            }
            else {
                cout << s[i];
            }
        }
    }
    cout << endl;
}