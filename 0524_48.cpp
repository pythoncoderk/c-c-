#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    cout << *max_element(begin(v), end(v)) << endl;
    cout << *min_element(begin(v), end(v)) << endl;
}