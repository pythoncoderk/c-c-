#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int total = a + b + c + d + e;
    string s = to_string(total);
    reverse(s.begin(), s.end());
    cout << s[0] << endl;
}