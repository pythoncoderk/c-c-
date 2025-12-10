#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < s.size(); i++) {
        if (i != n -1) cout << s[i];
    }
    cout << endl;

}