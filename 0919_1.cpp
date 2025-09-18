#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cen = 0;
    int one = 0;
    int two = 0;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        }
        else if (s[i] == '2') {
            two++;
            if (one < two) {
                flag = false;
            }
        }
        else if (s[i] == '/') {
            cen = i;
        }
    }
    if (one == n / 2 && two == n / 2 && cen == (n / 2) && flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}