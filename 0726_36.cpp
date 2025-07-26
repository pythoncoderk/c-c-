#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    for (int i = 0; i < 5; i++) {
        if (count(v.begin(), v.end(), i+1) == 0) {
            cout << i + 1 << endl;
            break;
        }
    }
}