#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;

    ans += a * b / 10;
    ans += c * d / 10;
    ans += e * f / 10;

    cout << ans << endl;

}