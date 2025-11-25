#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    bool ans = true;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 20) ans = false;
    }
    if (ans) cout << "OK" << endl;
    else cout << "NG" << endl;

}