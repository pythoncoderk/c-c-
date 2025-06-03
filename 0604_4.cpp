#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "+") {
            x += a;
            cout << x << endl;
        }
        else if (s == "-") {
            x -= a;
            cout << x << endl;

        }
        else if (s == "*") {
            x *= a;
            cout << x << endl;
        }
        else {
            if (x == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                x /= a;
            }
        }
    }
}