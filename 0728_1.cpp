#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = 0;
    if (n > 5) {
        total += 5;
    }
    else {
        total += n;
    }
    if (m > 5) {
        total += 5;
    }
    else {
        total += m;
    }
    cout << total << endl;
}