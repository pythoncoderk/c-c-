#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (count * 2 < count + k) {
            ans = (count * 2);
        }
        else {
            ans = (count + k);
        }
        count = ans;
    }

    cout << count << endl;
}