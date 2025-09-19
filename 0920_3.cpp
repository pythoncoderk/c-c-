#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(9, 0);
    while (n > 0) {
        v[n % 10]++;
        n /= 10;
    }
    if (v[1] == 1 && v[2] == 2 && v[3] == 3) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}