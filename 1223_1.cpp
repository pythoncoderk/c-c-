#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1[s1.size() - 1] == s2[0] && s2[s2.size() - 1] != 'n') cout << "OK" << endl;
    else cout << "NG" << endl;
}