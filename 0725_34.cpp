#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v;
    string s, m;
    cin >> s >> m;
    string ans = s + m;
    for (int i = 0; i < ans.size(); i++) {
        v.push_back(ans[i]);
        }
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] != v[i+1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}