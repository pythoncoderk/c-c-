#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = s.length();
    string t;
    t = s[x-1];
    if (t == "d") {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    }
