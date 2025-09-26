#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[s.size() - 1] == 'n' && s[s.size() - 2] == 'a' && s[s.size() - 3] == 's') {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}