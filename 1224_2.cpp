#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        n += x;
    }
    int m;
    cin >> m;
    if (n / 7 >= m) cout << "pass" << endl;
    else cout << "failure" << endl;
}