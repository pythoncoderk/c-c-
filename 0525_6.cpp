#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == m) {
        cout << "eq" << endl;
    }
    else {
        int ans[2] = {n, m};
        cout << *max_element(begin(ans), end(ans)) << endl;
    }
}