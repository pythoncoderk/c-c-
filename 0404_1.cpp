#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        int y;
        cin >> y;
        if (x == "+") {
            m = m + y;
        }
        else if (x == "-") {
            m = m - y;
        }
        else if (x == "*") {
            m = m * y;
        }
        else if (x == "/") {
            if (y == 0) {
                cout << "error" << endl;
                break;

            }
            else {
                m = m / y;
            }

        }
        cout << i + 1 << ":" << m << endl;
    }

}