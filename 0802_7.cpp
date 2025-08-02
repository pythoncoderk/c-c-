#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int x;

    rep(i, n) {
        cin >> x;
        sum += x;
    }
    cout << sum << endl;
}