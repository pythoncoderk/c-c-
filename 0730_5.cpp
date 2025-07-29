#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        if (v[i] <= 30) {
            ans++;
        }
    }
    cout << ans << endl;
}