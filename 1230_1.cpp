#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos = s.find("noaki");
    if (s.find("noaki") != string::npos) {
        s.replace(pos, 5, "");
    }
    cout << s << endl;
}