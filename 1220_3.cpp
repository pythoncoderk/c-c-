#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s1 + s2;
    int ans = 0;
    for (int i = 0; i < s3.size(); i++) {
        if (s3[0] != s3[i]) ans++;
    }
    if (ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}