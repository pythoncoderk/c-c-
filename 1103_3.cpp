#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (10000 * (i + 1)) * (1/n);
    }
    cout << ans << endl;
}