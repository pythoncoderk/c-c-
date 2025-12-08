#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n >= a) cout << n * b << endl;
    else cout << n * c << endl;
}