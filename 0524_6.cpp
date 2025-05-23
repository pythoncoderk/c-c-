#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x[] = {a, b, c};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < x[i]; j++) {
            if (i % 2 == 0) {
                cout << "A";
            }
            else {
                cout << "B";
            }

        }

    }
    cout << endl;
}