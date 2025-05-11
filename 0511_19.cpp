#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 10000) {
        cout << n + 10000 << endl;
    }
    else {
        cout << n << endl;
    }
}