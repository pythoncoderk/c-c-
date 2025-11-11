#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i + 1);
    }
    swap(v[a-1], v[b-1]);
    for (int x:v) cout << x << " ";
}