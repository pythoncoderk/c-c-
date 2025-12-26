#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n >= 25 || m <= 40) {
        if (n >= 25 && m <= 40) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}