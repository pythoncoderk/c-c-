#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-2; i++) {
        if (s[i] != s[i+1] && s[i+1] == s[i+2]) {
            cout << i + 1 << endl;
            return 0;
        else if (s[i] != s[i+1] && s[i+1] != s[i+2]) cout << i + 2 << endl;
            return 0;

        else if (s[i] == s[i+1] && s[i+1] && s[i+1] != s[i+2]) cout << i + 3 << endl;
        return 0;
        }
    }
}