#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    cin >> s;
    string m;
    cin >> m;
    int count1 = 0;
    for (int i = 0; i < m.length(); i++) {
        if (m[i] == s) {
            count1++;
        }
        }
    cout << count1 << endl;
    }
