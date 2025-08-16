#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
    bool flag = true;
    int count = 0;
    while (flag) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                v[i] /= 2;
            }
            else {
                flag = false;
                break;
            }

        }
        if (flag) {
            count++;
        }

    }
    cout << count << endl;
}