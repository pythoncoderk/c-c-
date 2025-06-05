#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    set<string> s2(v.begin(), v.end());
    if (s2.size() == 4) {
        cout << "Four" << endl;
    }
    else {
        cout << "Three" << endl;
    }

}