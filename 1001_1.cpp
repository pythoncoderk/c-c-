#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (a - b == (i + 1) - a) {
            count++;
        }
    }
    cout << count << endl;
}