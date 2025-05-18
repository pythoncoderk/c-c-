#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] != s[i+1]) {
            flag += 1;
        }
    }
    if (flag) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}