#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << regex_replace(s, regex("False"), "True") << endl;
}