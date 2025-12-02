#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        char x = '0' + n;
        if (c == x) count++;
    }
    cout << count << endl;
}