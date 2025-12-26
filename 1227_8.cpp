#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    float sum = accumulate(v.begin(), v.end(), 0);
    cout << fixed << setprecision(1) << sum / 7 << endl;
}