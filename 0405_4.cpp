#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int a;
        cin >> a;
        if (s == "+") {
            m = m + a;
            cout << i + 1 << ":" << m << endl;
        }
        else if (s == "-") {
            m = m - a;
            cout << i + 1 << ":" << m << endl;
        }
        else if (s == "*") {
            m = m * a;
            cout << i + 1 << ":" << m << endl;
        }
        else if (s == "/") {
            if (a == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                m = m / a;
                cout << i + 1 << ":" << m << endl;
            }
        }
    }

}