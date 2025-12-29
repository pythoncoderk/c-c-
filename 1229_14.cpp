#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[3];
    cin >> l[0] >> l[1] >> l[2];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < l[i]; j++) {
            if (i % 2 == 0) cout << "A";
            else cout << "B";
        }
    }
}