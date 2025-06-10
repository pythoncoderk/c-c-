#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    set<string> s(v.begin(), v.end());
    if (s.size() == 3) {
        cout << "Three" << endl;
    }
    else {
        cout << "Four" << endl;
    }


}