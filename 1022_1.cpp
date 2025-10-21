#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "+") {
            cout << i + 1 << ":" << x + m << endl;
            m += x;
        }
        else if (s == "-") {
            cout << i + 1 << ":" << m - x << endl;
            m -= x;
        }
        else if (s == "*") {
            cout << i + 1 << ":" << x * m << endl;
            m *= x;
        }
        else if (s == "/") {
            if (x == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                cout << i + 1 << ":" << m / x << endl;
                m /= x;
            }

        }
    }
}