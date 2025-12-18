#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 11) {
        if (m == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if (n == m) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}