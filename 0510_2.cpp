#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int total = 0;
    int x = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            total += 1 * x;
        }
        x *= 2;
    }
    cout << total << endl;
}