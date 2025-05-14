#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, m;
    cin >> s >> m;
    vector<int> v;
    if (s.length() == 2) {
        v.push_back(s[0]);
        v.push_back(s[1]);
    }
    else {
        v.push_back(s[0]);
    }
    if (m.length() == 2) {
        v.push_back(m[0]);
        v.push_back(m[1]);
    }
    else {
        v.push_back(m[0]);
    }
    bool flag = true;
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] != v[i + 1]) {
            flag = false;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}