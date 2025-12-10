#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int x = 1;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        ans += x * (s[i] - '0');
        x *= 2;
    }
    cout << ans << endl;
}