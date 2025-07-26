#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            ans++;
        }
    }
    if (ans >= 5) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}