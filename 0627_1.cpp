#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string s;
    cin >> s;
    vector<char> c;
    for (int i = 0; i < s.size(); i++) {
        c.push_back(s[i]);
    }
    for (int i = 0; i < v.size(); i++) {
        auto it = find(c.begin(), c.end(), v[i]);
        if (it != v.end()) {
            cout << c[i] << endl;
            break;
        }
    }

}