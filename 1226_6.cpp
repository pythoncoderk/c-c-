#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<float> v;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    float sum = 0;
    for (float x : v) {
        sum += x;
    }
    cout << fixed << setprecision(1) << sum / 7 << endl;
}