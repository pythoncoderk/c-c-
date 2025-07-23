#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int total = 0;
    int i_count = 2;
    // cout << s << endl;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            if (i == 0) {
                total++;
            }
            else {
                total += i_count;
                i_count *= 2;
            }
        }
        else {
            i_count *= 2;
        }
    }
    cout << total << endl;
}