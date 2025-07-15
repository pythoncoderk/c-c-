#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
            if (count >= 2) {
                cout << "NG" << endl;
                exit(0);
            }

        }
    }
    cout << "OK" << endl;
}