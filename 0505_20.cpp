#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = n-1; i < n && i >= 0; i--) {
        cout << s[i];
    }
}