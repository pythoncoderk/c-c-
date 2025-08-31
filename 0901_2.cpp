#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        for (int j = 0; j < s.size(); j++) {
            char d = s[j];
            if (i != j) {
                if (c == d) {
                    break;
                }
            }
        }
    }
}