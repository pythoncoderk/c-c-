#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'I' || s[i] == 'i' || s[i] == 'i') ans++;
    }
    if (ans >= 1) cout << "caution" << endl;
    else cout << s << endl;
}