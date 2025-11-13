#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        if (i != n + m) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "1" << endl;
}