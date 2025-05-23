#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin, s);
    regex pattern("False");
    string replaced = regex_replace(s, pattern, "True");
    cout << replaced << endl;
}