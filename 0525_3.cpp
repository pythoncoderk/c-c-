#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int total = n;
    for (int i = 0; i < 10; i++) {
        if (i != 9) {

            cout << total << " ";
            total += m;
        }
        else {
            cout << total << endl;
        }
    }
}