#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = n; i <= m; i++) {
        string s1, s2, s3;
        s1 = to_string(i);
        s3 = s1;
        reverse(s1.begin(), s1.end());
        if (s1 == s3) ans++;
    }
    cout << ans << endl;
}