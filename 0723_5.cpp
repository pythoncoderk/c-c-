#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    if (n < x) {
        cout << n << endl;
    }
    else {
        cout << m + n << endl;
    }
}