#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    if (b > c) {
        c += 24;
    }
    for  (int i = b; i <= c; i++) {
        if (i >= 24) {
            v.push_back(i - 24);
        }
        else v.push_back(i);
    }
    bool exists = (find(v.begin(), v.end(), a) != v.end());
    if (exists) cout << "No" << endl;
    else cout << "Yes" << endl;

}