#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    int times = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (i == 0) {
            total += y;
            times = x;
        }
        else {
            if (total - (x - times) < 0) {
                total = 0;
            }
            else {
                total -= x - times;
            }

            total += y;
            times = x;
        }

    }
    cout << total << endl;
}