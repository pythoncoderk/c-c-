#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (i % 9 == 0 && i != 0) cout << s1[i] << endl;
        else cout << s1[i];
    }
}