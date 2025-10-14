#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int x = n - (t + a);
    if ((t + x > a and a + x < t) || (t + x < a and a + x > t)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}