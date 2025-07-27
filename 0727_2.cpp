#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    regex pattern("Python");
    string ans = regex_replace(s, pattern, "C++");
    cout << ans << endl;
}