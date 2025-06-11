#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] - ans > m) {
            cout << "No" << endl;
            return 0;
        }
        else {
            ans = v[i];
        }

    }
    cout << "Yes" << endl;
}