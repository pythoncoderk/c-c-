#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] != s[i+1]) {
            flag = false;
        }
    }
    if (flag) {
        cout << s << endl;
    }
    else {
        cout << "No" << endl;
    }
}