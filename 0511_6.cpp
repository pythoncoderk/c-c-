#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    int x, y;
    x = n / m;
    y = x * l;
    cout << y - x * m << endl;
}