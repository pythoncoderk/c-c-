#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> v = {a, b, c, d, e};
    set ans(v.begin(), v.end());
    cout << ans.size() << endl;
}