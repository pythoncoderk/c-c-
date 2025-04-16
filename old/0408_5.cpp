#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans;
    ans += m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int a;
        cin >> a;
        if (s == "+") {
            ans += a;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "-") {
            ans -= a;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "*") {
            ans *= a;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "/") {
            if (a == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                ans /= a;
                cout << i + 1 << ":" << ans << endl;
            }
        }
    }
}