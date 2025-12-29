#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t pos = 0;
    while ((pos = s.find("False", pos)) != string::npos) {
        s.replace(pos, 5, "True");
        pos += 4;
    }
    cout << s << endl;
}