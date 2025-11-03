#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int avg = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v.at(i);
    }
    for (int i = 0; i < n; i++) {
        avg += v.at(i);
    }
    avg = avg / n;
    for (int i = 0; i < n; i++) {
        cout << abs(avg - v.at(i)) << endl;
    }
}