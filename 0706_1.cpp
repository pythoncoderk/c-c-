#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v[i] = s;
    }
    set<string> sv;
    for (int i = 0; i < v.size(); i++) {
        string ans;
        ans = v[i];
        for (int j = 0; j < v.size(); j++) {
            if (i != j) {
                ans += v[j];
                sv.insert(ans);
                ans = v[i];
            }
        }

    }
    cout << sv.size() << endl;

}