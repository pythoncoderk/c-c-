#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = s.find(':');
    int y = s.length();
    int ans = stoi(s.substr(0,x)) - 8;
    if (ans < 0) {
        ans += 24;
    }
    cout << ans << s.substr(x, y) << endl;
}