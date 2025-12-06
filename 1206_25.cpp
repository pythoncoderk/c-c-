#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(s[i]);
    }
    set<char> S(v.begin(), v.end());
    if (S.size() <= 3) cout << "NG" << endl;
    else cout << "OK" << endl;
}