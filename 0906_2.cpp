#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;

    for (char i : s) {
        if (i == '2') {
            ans += i;
        }
    }
    cout << ans << endl;
}