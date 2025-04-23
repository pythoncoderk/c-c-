#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    if (m % 30 == 0) {
        cout << (m / 30) * n << endl;
    }
    else {
        cout << ((m + 30 - 1) / 30) * n << endl;
    }

}