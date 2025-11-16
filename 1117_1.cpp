#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bool flag = true;
        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) flag = false;
        }
        if (flag) cout << i + 1 << endl;
    }
}