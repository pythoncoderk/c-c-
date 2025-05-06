#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n + m == 21) {
        cout << "Win" << endl;
    }
    else {
        cout << n + m << endl;
    }
}