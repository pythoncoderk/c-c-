#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int ans_m = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '1') {
            ans++;
        }

    }
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '-') {
            ans_m -= 2;
        }
    }
    if (ans_m == 0) {
        cout << ans + ans_m << endl;
    }
    else {
        cout << ans + ans_m - 1 << endl;
    }
}
