#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

    }
    if (reduce(begin(v), end(v)) <= m) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}