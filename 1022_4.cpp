#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++) {
        string s1;
        cin >> s1;
        s.insert(s1);
    }
    if (s.size() == 3) cout << "Three" << endl;
    else cout << "Four" << endl;
}