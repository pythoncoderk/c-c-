#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    regex pattern("at");
    string replacement = "@";
    string result = regex_replace(s, pattern, replacement);
    cout << result << endl;
}