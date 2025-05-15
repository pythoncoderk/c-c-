#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I' || s[i] == 'l' || s[i] == 'i') {
            flag++;
        }
    }
    if (flag >= 1) {
        cout << "caution" << endl;
    }
    else {
        cout << s << endl;
    }
}