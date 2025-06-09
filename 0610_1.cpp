#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v[i] = s;
    }
    set<string> set1(v.begin(), v.end());
    if (set1.size() == 4) {
        cout << "Four" << endl;
    }
    else {
        cout << "Three" << endl;
    }
}