#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans;
    ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ans = b - a + 1 + ans;

    }
    cout << ans << endl;
}