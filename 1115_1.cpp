#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> v2(v.begin()+m-1, v.end());
    vector<int> v3(v.begin(), v.begin()+m-1);
    v2.insert(v2.end(), v3.begin(), v3.end());
    for (int x : v2) cout << x << " ";
    cout << endl;
}