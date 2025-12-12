#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < 10; i++) {
        string s1;
        cin >> s1;
        s.push_back(s1);

    }
    cout << s[n-1] << endl;
}