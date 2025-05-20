#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '2') {
        cout << "ok" << endl;
    }
    else if (s[0] == '4') {
        cout << "error" << endl;
    }
    else {
        cout << "unknown" << endl;
    }
}