#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int v[] = {a, b, c, d};
    for (int i = 0; i < 5; i++) {
        if (count(begin(v), end(v), i + 1) == 0) {
            cout << i + 1 << endl;
        }
    }


            }

