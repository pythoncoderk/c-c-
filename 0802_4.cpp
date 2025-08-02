#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
            }
    int x;
    bool flag = false;
    cin >> x;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            flag = true;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}