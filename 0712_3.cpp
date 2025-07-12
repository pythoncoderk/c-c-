#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1000) {
        cout << (n * 10) / 100 << endl;
    }
    else {
        cout << 0 << endl;
    }
}