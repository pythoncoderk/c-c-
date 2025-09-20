#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    vector<int> v1 = {0, 0, 0, 0};
    for (int i = 0; i < v.size(); i++) {
        v1[i] = count(v.begin(), v.end(), v[i]);
    }
    if (count(v1.begin(), v1.end(), 4) >= 1) {
        cout << 2 << endl;
    }
    else if (count(v1.begin(), v1.end(), 3) >= 1) {
        cout << 1 << endl;
    }
    else if (count(v1.begin(), v1.end(), 2) == 4) {
        cout << 2 << endl;
    }
    else if (count(v1.begin(), v1.end(), 2) >= 1) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}