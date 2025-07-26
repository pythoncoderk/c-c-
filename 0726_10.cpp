#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int s_count_1 = 0;
    int s_count_2 = 0;
    string ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            s_count_1++;
        }
        else if (s[i] == '_') {
            s_count_2++;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-' || s[i] == '_') {
            if (s_count_1 <= s_count_2) {
                ans += '_';
            }
            else {
                ans += '-';
            }
        }
        else {
            ans += s[i];
        }
    }
    cout << ans << endl;
}