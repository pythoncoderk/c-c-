#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= 18000; i++) {
        if (i == (180 * (n - 2)) / 180 + 2) {
            cout << i << endl;
            break;
        }
    }

}