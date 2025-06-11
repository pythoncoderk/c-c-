#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'o' && s2[i] == 'o') {
            cout << "Yes" << endl;
            exit(0);
        }

    }
    cout << "No" << endl;
}