#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    int p1 = 0;
    string s = "";

    // パターン1
    if (p == 1) {
        int price;
        cin >> price;
        p1 = price;
    }

    // パターン2
    if (p == 2) {
        string text;
        int price;
        cin >> text >> price;
        p1 = price;
        s = text;
    }

    int N;
    cin >> N;
    if (p == 2) cout << s << "!" << endl;
    cout << p1 * N << endl;
}
