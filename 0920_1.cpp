#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int one = 0;
    int two = 0;
    int three = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            one++;
        }
        else if (s[i] == '2') {
            two++;
        }
        else if (s[i] == '3') {
            three++;
        }
    }
    if (one == 1 && two == 2 && three == 3) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}