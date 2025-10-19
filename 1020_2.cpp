#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 1; i <= a; i++) {
        int x;
        cin >> x;

        if (b - x >= 0) {
            b -= x;
            count++;
        }
        else {
            break;
        }
    }
    cout << count << endl;

}