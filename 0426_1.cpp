#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for (char i : s) {
        if (isupper(i)) {
            ans += i;
        }
    }
    cout << ans << endl;
}