#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = 0;
    for (int y : v) {
        sum += y;
    }
    cout << sum / n << endl;
}