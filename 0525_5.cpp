#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = n;
    for (int i = 0; i < 9; i++) {
        if (i != 8) {
            cout << total << " ";
            total += n;
        }
        else {
            cout << total << endl;
        }
    }
}