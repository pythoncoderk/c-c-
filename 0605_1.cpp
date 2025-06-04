#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int ans = a;
    for (int i = 0; i < n; i++) {
        string s;
        int t;
        cin >> s >> t;
        if (s == "+") {
            ans += t;
        }
        else if (s == "-") {
            ans -= t;
        }
        else if (s == "*") {
            ans *= t;
        }
        else {
            if (t == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                ans /= t;
            }
        }
        cout << i + 1 << ":" << ans << endl;
    }
}