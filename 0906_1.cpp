#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = true;
    int value = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= value) {
            flag = false;
        }
        else {
            value = x;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
 }
