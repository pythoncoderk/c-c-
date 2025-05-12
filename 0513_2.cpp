#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char s1 = *"";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ':') {
            break;
        }
        else {
            s1 += s[i];
        }
    }
    int x = 0;
    x = static_cast<int>(s1);
}