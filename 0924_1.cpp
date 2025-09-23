#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int now = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x - now >= m || i == 0) {
            ans++;
            now = x;
        }
    }
    cout << ans << endl;
}