#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') ans++;
    }
    if (n <= ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}