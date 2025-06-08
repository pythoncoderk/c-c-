#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        v[i] = s;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i+1] << endl;
    }
}