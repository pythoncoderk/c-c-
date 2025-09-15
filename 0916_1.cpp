#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2, s3;
    cin >> n >> s1 >> s2 >> s3;
    for (int i = 0; i < n; i++) {
        if (s3[i] != s1[0]) {
            cout << s2;
        }
        else {
            cout << s3[i];
        }
    }
    cout << endl;
}