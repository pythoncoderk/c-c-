#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int avg = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.at(i) = x;
        avg += x;
    }
    avg /= n;
    for (int i = 0; i < n; i++) {
        cout << abs(avg - v.at(i)) << endl;
    }
}