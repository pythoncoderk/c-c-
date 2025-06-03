#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        int t;
        cin >> s >> t;
        if (s == "+") {
            m += t;
            cout << i + 1 << ":" << m << endl;
        }
        else if (s == "-") {
            m -= t;
            cout << i + 1 << ":" <<  m << endl;
        }
        else if (s == "*") {
            m *= t;
            cout << i + 1 << ":" << m << endl;
        }
        else {
            if (t == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                m /= t;
                cout << i + 1 << ":" << m << endl;
            }
        }
    }
}