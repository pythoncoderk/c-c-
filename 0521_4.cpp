#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    vector<float> v = {a, b, c, d, e, f, g};
    float sum = reduce(v.begin(), v.end());
    float x = round((sum / 7) * 10) / 10;
    cout << fixed << setprecision(1) << x << endl;

}