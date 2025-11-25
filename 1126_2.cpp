#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() <= 10) cout << 0 << endl;
    else cout << s.size() - 10 << endl;
}