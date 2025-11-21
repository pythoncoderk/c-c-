#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> v = {a, b};
    int ans = 0;
    for (int i = -1000; i < 101; i++) {
        vector<int> v2 = v;
        v2.push_back(i);
        sort(v2.begin(), v2.end());
        if (v2[1] - v2[0] == v2[2] - v2[1]) ans++;
            }
    cout << ans << endl;
}