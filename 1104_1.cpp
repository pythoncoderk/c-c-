#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a]++;
        v[b]++;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
}