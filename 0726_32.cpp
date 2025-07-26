#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    int n;
    cin >> a >> b >> c >> d >> e >> f >> g >> n;
    vector<int> v = {a, b, c, d, e, f, g};
    float total = reduce(begin(v), end(v)) / 7;
    if (total >= n) {
        cout << "pass" << endl;
    }
    else {
        cout << "failure" << endl;
    }

}