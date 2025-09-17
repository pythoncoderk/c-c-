#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == '@') {
                s[j] = '.';
                break;
            }

        }

    }

    int dotCount = count(s.begin(), s.end(), '.'); // ← ここでカウント
    cout << dotCount << endl;
}