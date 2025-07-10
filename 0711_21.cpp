#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;
    int n;
    cin >> n;
    char t = s[n-1];
    if (c == t) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}