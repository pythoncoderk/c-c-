#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, m;
    cin >> s >> m;
    vector<string> v(s.length() + m.length());
    for (int i = 0; i < s.length(); i++) {
        cin >> v.at(s[i]);
    }
}