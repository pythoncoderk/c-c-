#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        total += x;
    }
    if (total <= n) {
        cout << total << endl;
    }
    else {
        cout << n << endl;
    }
}