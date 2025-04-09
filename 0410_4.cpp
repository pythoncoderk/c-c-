#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    for (int i = 0; i < 7; i++) {
        cin >> n;
        ans += n;
    }
    cout << ans << endl;
}