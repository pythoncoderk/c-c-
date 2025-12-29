#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string from = "False";
    string to = "True";

    size_t pos = 0;
    while ((pos = s.find(from, pos)) != string::npos) {
        s.replace(pos, from.size(), to);
        pos += to.size();
    }
    cout << s << endl;
}