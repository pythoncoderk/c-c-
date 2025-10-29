#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v.at(i);
    bool ans = false;
    int m = v.at(0);
    for (int i = 1; i < v.size(); i++) {
        if (i != 0) {
            if (m < v.at(i)) {
                m = i + 1;
                ans = true;
                break;
            }
        }
    }
    if (ans) cout << m << endl;
    else cout << -1 << endl;
}
