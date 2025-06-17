#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool flag = true;
    int ans = 0;
    while (flag) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                v[i] = v[i] / 2;
                count++;
            }
            else {
                flag = false;
                break;
            }
            if (count == n) {
                ans++;
            }
        }

    }
    cout << ans << endl;
}