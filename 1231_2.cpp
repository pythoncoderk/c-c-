#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[5];
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        l[i] = n;
    }
    for (int i = 0; i < 4; i++) {
        cout << l[i+1] - l[i] << endl;
    }
}