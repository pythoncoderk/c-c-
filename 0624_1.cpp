#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int total = 0;
    bool flag = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            if (flag) {
                total++;
            }
            else {
                total--;
                flag = true;
            }
        }
        else if (s[i] == '+') {
            flag = true;
        }
        else if (s[i] == '-') {
            flag = false;
        }
    }
    cout << total << endl;
}