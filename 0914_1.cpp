#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m;
    string name;
    cin >> m >> name;
    if (v[m-1] == name) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}