#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        total += y - x + 1;
    }
    cout << total << endl;
}