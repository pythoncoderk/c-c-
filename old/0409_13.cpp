#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        string s;
        int n;
        cin >> s >> n;
        if (s == "+") {
            b += n;
            cout << i + 1 << ":" << b << endl;
        }
        else if (s == "-") {
            b -= n;
            cout << i + 1 << ":" << b << endl;
        }
        else if (s == "*") {
            b *= n;
            cout << i + 1 << ":" << b << endl;
        }
        else if (s == "/") {
            if (n == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                b /= n;
                cout << i + 1 << ":" << b << endl;
            }
        }
    }

}