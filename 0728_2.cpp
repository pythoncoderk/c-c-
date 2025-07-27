#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.find("noaki") != string::npos) {
        int f = s.find("noaki");
        cout << s.replace(f, 5, "") << endl;
    }
    else {
        cout << s << endl;
    }
}