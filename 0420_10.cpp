#include <bits/stdc++.h>
using namespace std;

int main() {
    float n, m;
    cin >> n >> m;
    if (n <= m * 0.7) {
        int ans = 0;
        ans = n;
        cout << n;
    }
    else {
        int ans = 0;
        ans = m - (m * 0.3);
        cout << m - (m * 0.3);
    }
}