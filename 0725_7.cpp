#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (i != 0 && i % 9 == 0) {
            cout << endl;
        }
    }
}