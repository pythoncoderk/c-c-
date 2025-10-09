#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(a);
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
    v.insert(v.begin() + b, c);
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}