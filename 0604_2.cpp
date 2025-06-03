#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1;
    ans += a;
    cout << ans << endl;
    ans *= (b + c);
    cout << ans << endl;
    ans *= ans;
    cout << ans << endl;
    ans--;
    cout << ans << endl;

}