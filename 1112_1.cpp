#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v2;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % k == 0) {
            v2.push_back(v[i] / k);
        }

    }
    for (int i = 0; i < v2.size(); i++) {
        if (i == v2.size()-1) {
            cout << v2[i] << endl;
        }
        else {
            cout << v2[i] << " ";
        }
    }
}