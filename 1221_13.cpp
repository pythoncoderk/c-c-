
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '_') a++;
        else if (s[i] == '-') b++;
    }
    if (a > b) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-') cout << '_';
            else cout << s[i];
        }

    }else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '_') cout << '-';
            else cout << s[i];
        }
    }
    cout << endl;
}