#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n < 3) {
        cout << 500 << endl;
    }
    else {
        cout << 500 + ((n - 3) * m) << endl;
    }

}