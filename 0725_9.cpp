#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    int st = x / a;
    cout << (st * b) - (st * a) << endl;
}