#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    int ans = *max_element(v.begin(), v.end());
    cout << ans << endl;
}