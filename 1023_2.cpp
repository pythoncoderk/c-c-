#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ss = stoi(s);
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int num = static_cast<int>(s[i]) - 48;
        ans += num;
    }
    if (ss % ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}