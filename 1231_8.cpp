#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[3];
    for (int i = 0; i < 3; i++) {
        cin >> l[i];

    }
    if (l[0] == l[1] && l[1] == l[2]) cout << "YES" << endl;
    else cout << "NO" << endl;
}