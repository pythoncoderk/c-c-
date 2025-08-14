#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (count(v.begin(), v.end(), s[i]) == 0) {
            cout << s[i];
        }
    }
    cout << endl;
}