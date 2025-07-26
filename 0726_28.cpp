#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    char ch = s1.back();
    char ch2 = s2[0];
    char ch3 = s2.back();
    if (ch == ch2 && ch3 != 'n') {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }

}