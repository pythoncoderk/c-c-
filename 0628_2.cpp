#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(s[i]);
    }
    vector<char> c = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
    'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < c.size(); i++) {
        if (find(v.begin(), v.end(), c[i]) == v.end()) {
            cout << c[i] << endl;
            break;
        }

    }
}