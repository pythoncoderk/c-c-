#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n >= 1600 && n <= 2999 && m == 1) {
        cout << "Yes" << endl;
    }
    else if (n >= 1200 && n <= 2399 && m == 2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}