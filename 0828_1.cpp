#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    bool flag = true;
    int times = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x - times > s) {
            flag = false;
        }
        times = x;
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}