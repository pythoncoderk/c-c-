#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n >= 5) {
        n = 5;
    }
    if (m >= 5) {
        m = 5;
    }
    cout << n + m << endl;
}