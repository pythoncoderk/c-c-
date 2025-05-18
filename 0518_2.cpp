#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m < 0) {
        cout << n + abs(m) << endl;
    }
    else {
        cout << n - m << endl;
    }
}