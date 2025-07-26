#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            ans += '_';
        }
        else if (s[i] == '_') {
            ans += '-';
        }
        else {
            ans += s[i];
        }
    }
    cout << ans << endl;
}