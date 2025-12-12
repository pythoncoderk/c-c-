#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string s1;
        cin >> s1;
        s.push_back(s1);
    }
    for (int i = 0; i < n; i++){
        if (i == n - 1) cout << s[i] << endl;
        else cout << s[i] << " ";
    }
}