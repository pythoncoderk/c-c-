#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    cout << s << endl;
    int total = 0;
    for (int i = 0; i < len; i++) {
        int t;
        t = 0;
        t = stox(s[i]);
        total = total + t;
    }
}