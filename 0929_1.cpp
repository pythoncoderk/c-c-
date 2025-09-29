#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        x = pow(-1, i+1);
        y = pow(i+1, 3);
        ans += x * y;
    }
    cout << ans << endl;
}