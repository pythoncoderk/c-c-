#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> b.at(i);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a.at(i) + b.at(j) == m) {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}