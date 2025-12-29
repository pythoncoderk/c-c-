#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = n / 100;
    if (ans == 4) cout << "error" << endl;
    else if (ans == 2) cout << "ok" << endl;
    else cout << "unknown" << endl;
}