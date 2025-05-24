#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[5];
    for (int i = 0; i < 5; i++) {
        cin >> l[i];
    }
    for (int i = 0; i < 4; i++) {
        cout << l[i+1] - l[i] << endl;
    }
}