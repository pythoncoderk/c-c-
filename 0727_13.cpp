#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += m;
        m--;
    }
    cout << sum << endl;
}