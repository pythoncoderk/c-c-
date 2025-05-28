#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x = n % 500;
    if (x <= m) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}