#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g = 0;
    int p = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "G") g++;
        else p++;
    }
    if (g == p) cout << "Draw" << endl;
    else if (g < p) cout << "G" << endl;
    else cout << "P" << endl;
}