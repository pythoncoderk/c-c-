#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    int mx = *max_element(v.begin(), v.end());
    cout << mx << endl;
}