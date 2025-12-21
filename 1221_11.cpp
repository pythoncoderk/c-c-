#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n % 2 == 0) {
        if (m % 2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else {
        if (m % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}