#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = ((s.size()+1)/2);
    string ans2 = "";
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 == ans) continue;
        else ans2 += s.at(i);
    }
    cout << ans2 << endl;
}