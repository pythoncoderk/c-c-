#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        int x;
        x = n % 10;
        n /= 10;
        v[i] = x;
    }
    cout << v[1] << v[0] << v[2] << " ";
    cout << v[0] << v[2] << v[1] << endl;
}