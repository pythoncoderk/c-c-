#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 0) {
        cout << "Yes" << endl;
    }
    else if (n == 0 && m == 0) {
        {
            cout << "No" << endl;
        }

    }
    else {
        cout << "Invalid" << endl;
    }
}