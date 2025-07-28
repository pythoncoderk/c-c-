#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 4; i++) {
        int m;
        cin >> m;
        cout << m - n << endl;
        n = m;
    }
}