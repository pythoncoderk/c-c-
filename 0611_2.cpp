#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int ans = 0;
    for (int i = 0; i < len; i++) {
        char c = s[i];
        ans += c - '0';
    }
    int x;
    x = stoi(s);
    if (x % ans == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}