#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    int l[7] = {a, b, c, d, e, f, g};
    int flag = 0;
    for (int i = 0; i < 7; i++) {
        if (l[i] == 1) {
            flag++;
        }
    }
    if (flag >= 4) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}