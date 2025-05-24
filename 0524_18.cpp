#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ABCDEFGHIJKABC";

    string ans = "XYZ";
    regex reg{"ABC"};

    string ret = regex_replace(s, reg, ans);
    cout << ret << endl;
}