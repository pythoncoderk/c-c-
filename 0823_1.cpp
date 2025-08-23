#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    for (int i = 0; i < a; i++) {
        s.replace(i, 1, "*");
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < b; i++) {
        s.replace(i, 1, "*");
    }
    reverse(s.begin(), s.end());

    s = regex_replace(s, regex("\\*"), "");

    cout << s << endl;
}