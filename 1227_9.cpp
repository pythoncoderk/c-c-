#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ss = 0;
    int rr = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S') ss++;
    }
    cout << ss << " ";
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') rr++;
    }
    cout << rr << endl;
}