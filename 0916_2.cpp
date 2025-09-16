#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int l = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (i != 0) {
            l -= x - count;
        }
        if (l < 0) {
            l = 0;
        }
        l += y;
        count = x;
    }
    cout << l << endl;
}