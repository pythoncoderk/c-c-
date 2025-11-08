#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s1 = "";
    for (int i = 3; i < 6; i++) {
        s1 += s[i];
    }
    int n = stoi(s1);
    if (n >= 350 || n == 316 || n == 0) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
}