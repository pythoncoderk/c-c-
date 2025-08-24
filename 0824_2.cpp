#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
    cin >> m;
    for (int i = 0; i < n; i++) {
        if (v[i] == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}