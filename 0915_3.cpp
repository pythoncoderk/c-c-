#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> s = {a, b, c, d};
    if (s.size() == 2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}