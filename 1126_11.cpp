#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v = {a, b, c};
    if (accumulate(v.begin(), v.end(), 0) <= n) cout << "OK" << endl;
    else cout << "NG" << endl;
}