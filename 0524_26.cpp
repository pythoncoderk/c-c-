#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        int chk;
        cin >> chk;
        if (chk <= 30) {
            ++ans;
        }
    }
    cout << ans << endl;
}