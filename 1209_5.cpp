#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        ans += x;
    }
    if (ans > n) cout << n << endl;
    else cout << ans << endl;
}