#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    bool flag = true;
    for (int i = a - 1; i < b; i++) {
        if (s[i] == 'x') {
            flag = false;
        }
    }
    if (flag == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}