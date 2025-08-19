#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            count++;
        }
    }
    cout << count << endl;
}