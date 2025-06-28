#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            total += v[i];
        }
    }
    cout << total << endl;
}