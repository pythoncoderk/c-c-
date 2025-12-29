#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t pos = s.find("False");

    if (pos != string::npos) {
        s.replace(pos, 5, "True");

    }
    cout << s << endl;
}