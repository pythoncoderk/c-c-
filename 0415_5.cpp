#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++) {
        cin >> a.at(i);
    }
    for (int i = 0; i < 3; i++) {
        cin >> b.at(i);
    }
    bool answer = false;

    for (int i = 0; i < 3; i++) {
        if (a.at(i) == b.at(0) || a.at(i) == b.at(1) || a.at(i) == b.at(2)) {
            answer = true;
        }
    }
    if (answer) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}