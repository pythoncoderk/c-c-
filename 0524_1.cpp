#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string t = "True";
    regex reg{"False"};

    string ret = regex_replace(s, reg, t);
    cout << ret << endl;
}