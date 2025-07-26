#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 10) {
        cout << 1000 << endl;
    }
    else {
        cout << n * 150 << endl;
    }
}