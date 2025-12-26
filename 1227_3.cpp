#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> v2;
    set<int> v1 = {1, 2, 3, 4, 5};
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        v2.insert(x);
    }
    set<int> diff;

    set_difference(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        inserter(diff, diff.begin())
        );
    for (int x : diff) {
        cout << x << endl;
    }
}