#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &nx:v) {
        cin >> nx;
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}