#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        ans += v[i] / 100;
    }
    if (m - ans <= 0) {
        cout << 0 << endl;
    }
    else {
        cout << (m - ans) * 100 << endl;
    }
}