#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n <= 3) cout << 500 << endl;
    else cout << (n - 3) * m + 500 << endl;
}