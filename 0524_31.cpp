#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "@";
    regex reg{"at"};

    string final = regex_replace(s, reg, ans);
    cout << final << endl;
}