#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = (m + 30 - 1) / 30;
    cout << n * ans << endl;
}