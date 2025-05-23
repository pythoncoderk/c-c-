#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string from = "False";
    string to = "True";

    size_t pos = s.find(from);
    if (pos != string::npos) {
        s.replace(pos, from.size(), to);
    }

    cout << s << endl;
}