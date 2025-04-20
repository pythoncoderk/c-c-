#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double m;
    cin >> n >> m;
    if (n < m * 0.7) {
        cout << n << endl;
    }
    else {
        cout << m * 0.7 << endl;
    }
}