#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    string s = "12345";
    int len = s.length();
    for (int i = 0; i < len; i++) {
        ans += (s[i] - '0');
        cout << s[i] << endl;
    }

    cout << ans << endl;


}