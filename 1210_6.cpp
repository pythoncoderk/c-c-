#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    cout << n * min(min(a, b), min(c, d)) << endl;
}