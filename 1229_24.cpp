#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a >= 5) ans += 5;
    else ans += a;

    if (b >= 5) ans += 5;
    else ans += b;
    cout << ans << endl;
}