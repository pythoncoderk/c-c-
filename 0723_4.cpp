#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    cout << v[0] * n << endl;
}