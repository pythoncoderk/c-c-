#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a, b;
    a = m / 60;
    b = m % 60;
    cout << n * (a + (b / 60)) << endl;
}