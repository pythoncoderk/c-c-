#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (ans * 2 < ans + m) ans *= 2;
        else ans += m;
    }
    cout << ans << endl;
}