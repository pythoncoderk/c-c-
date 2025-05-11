#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            cout << "C";
        }
        else if (s[i] == '1') {
            cout << "A";
        }
        else if (s[i] == '2') {
            cout << "B";
        }

    }
    cout << endl;
}