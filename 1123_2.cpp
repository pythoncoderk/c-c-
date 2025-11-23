#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i;
    cin >> n >> m >> i;
    vector<int> v = {n, m, i};
    int mx = *max_element(v.begin(), v.end());
    cout << mx << endl;

}