#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos = s.find("False");
    if (pos == string::npos) s.replace(pos, s.size(), "True");

    cout << s << endl;

    }
