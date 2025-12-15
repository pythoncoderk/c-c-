#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == 'A') cout << 'R' << s.substr(1,2) << endl;
    else cout << s << endl;
}