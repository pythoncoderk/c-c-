#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    vector<int> v = {a, b, c, d, e, f, g};
    float total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
    }
    float avg = round((total / 7) * 10) / 10;
    cout << fixed << setprecision(1) << avg << endl;
}