#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<string> v = {a, b, c, d, e};
    vector<string> v2;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            string x;
            x = v[i][j];
            v2.push_back(x);
        }
    }
    set<string> s(v2.begin(), v2.end());
    cout << s.size() << endl;
}