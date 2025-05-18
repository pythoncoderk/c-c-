#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n * m >= 10000) {
        cout << "NG" << endl;
    }
    else {
        cout << n * m << endl;
    }
}