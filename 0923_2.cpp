#include <bits/stdc++.h>
using namespace std;

int main() {
    float n;
    float m;
    cin >> n >> m;
    float fee = 1000;
    float ans = 0;
    while (true) {
        float x = (n - fee) * (0.008);
        if (n - fee + x <= n) {
            ans = n - fee + x;
            break;
        }
        else {
            fee += 1000;
        }
    }
    if (n - fee >= n) {
        cout << n - fee << endl;
    }
    else {
        cout << 0 << endl;
    }
}