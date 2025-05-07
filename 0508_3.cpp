#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            count++;
        }
    }
    if (count >= n) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}