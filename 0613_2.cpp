#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x * 2 < (m - x) * 2) {
            ans += x * 2;
        }
        else {
            ans += (m - x) * 2;
        }

    }
    cout << ans << endl;
}