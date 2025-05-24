#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() >= 11) {
        cout << "OK" << endl;
    }
    else {
        cout << 11 - s.length() << endl;
    }
}