#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = n;
    for (int i = 0; i < 9; i++) {
        cout << ans;
        ans = ans + n;
        if (i != 8) {
            cout << " ";
        }
    }

}