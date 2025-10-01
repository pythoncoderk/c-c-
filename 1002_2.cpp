#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int i = c;
    while (i != a) {
        if (i == 24) {
            i = 0;
        }
        if (i == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            i++;
        }
    }
    cout << "No" << endl;
}