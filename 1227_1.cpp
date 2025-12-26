#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s2.find(s1) != string::npos) cout << "NG" << endl;
    else cout << s2 << endl;

}