#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {

        if (i == n) {
            string s;
            cin >> s;
            cout << s << '.' << endl;
        }
        else if (i == 0) {
            cout << "Hello ";
        }
        else {
            string s;
            cin >> s;
            cout << s << ",";
        }
    }
}