#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0) {
            v.push_back(2);
            n -= 2;
        }
        else {
            v.push_back(1);
            n -= 1;
        }
    }
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}