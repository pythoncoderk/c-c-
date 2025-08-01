#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = n;
    for (int i = 0; i < 10; i++) {
        if (i != 9) {
            cout << ans << " ";
            ans += m;
        }
        else {
            cout << ans << endl;
        }
    }
}