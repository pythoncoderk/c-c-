#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    if (n % 24 == 0) ans = n / 24;
    else (ans = n / 24 + 1);
    cout << ans << endl;
}