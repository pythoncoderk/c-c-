#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int final = stoi(s);
    vector<int> v;
    for (char ch : s) {
        v.push_back(ch - '0');
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i];
    }
    if (final % ans == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}