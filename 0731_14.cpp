#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        string s;
        cin >> s;
        if (s == "no") {
            ans++;
        }
    }
    cout << ans << endl;
}