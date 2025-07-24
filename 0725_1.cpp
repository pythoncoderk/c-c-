#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count_a = 2;
    int ans = 0;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            if (s[i] == '1') {
                ans++;
            }
        }
        else {
            if (s[i] == '1') {
                ans += count_a;
                count_a = count_a * 2;
            }
            else {
                count_a = count_a * 2;
            }

        }
    }
    cout << ans << endl;
}