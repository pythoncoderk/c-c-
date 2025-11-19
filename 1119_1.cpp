#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = n; i <= m; i++) v.push_back(i);
    cout << v.size() << endl;
}