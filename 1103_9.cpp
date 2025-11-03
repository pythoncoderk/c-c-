#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<string>> v1(n+2, vector<string>(m+2, "#"));

    vector<string> v2(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v2[i] = s;
    }

    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j <= m; j++) {
            v1[i][j] = v2[i-1][j-1];
        }
    }

    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < m+2; j++) {
            cout << v1[i][j];
        }
        cout << endl;
    }





}