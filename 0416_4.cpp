#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3), b(3);
    for (int i = 0; i < 3; i++) {
        cin >> a.at(i);
    }
    bool answer = false;

    if (a.at(0) == b.at(0) || a.at(0) == b.at(1) || a.at(0) == b.at(2) ||
        a.at(1) == b.at(0) || a.at(1) == b.at(1) || a.at(1) == b.at(2) ||
        a.at(2) == b.at(0) || a.at(2) == b.at(1) || a.at(2) == b.at(2)) {
        answer = true;
    }
    if (answer) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}