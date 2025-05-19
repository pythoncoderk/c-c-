#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 23) {
        cout << n % 24 << endl;
    }
    else {
        cout << n << endl;
    }
}