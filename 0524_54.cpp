#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    cin >> s;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == s) {
            cout << i + 1 << endl;
        }
    }
}