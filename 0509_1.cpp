#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < s.length(); i++) {
        if (n != i + 1) {
            cout << s[i];
        }
    }
    cout << endl;
}