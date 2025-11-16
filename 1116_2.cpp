#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = n - m; i < n; i++) cout << v[i] << ' ';
    for (int i = 0; i < n - m; i++) cout << v[i] << ' ';
    cout << endl;
}