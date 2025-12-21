#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char x = s[0];

    for (int i = 0; i < s.size(); i++) {
        if (x != s[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << s << endl;
}