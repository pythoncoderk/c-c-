#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = 1;
    for (int i = 0; i < n; i++) {
        if (total * 2 > total + m) {
            total += m;
        }
        else {
            total *= 2;
        }

    }
    cout << total << endl;
}