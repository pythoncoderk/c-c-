#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 7; i++) {
        string s;
        cin >> s;
        if (s == "Rain") ans++;
    }
    if (ans >= 4) cout << "Yes" << endl;
    else cout << "No" << endl;
}