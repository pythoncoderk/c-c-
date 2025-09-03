#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int target = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (target == x) {
            count++;
            target = x;
        }
        else {
            target = x;
            count = 0;
        }
        if (count >= 2) {
            flag = true;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}