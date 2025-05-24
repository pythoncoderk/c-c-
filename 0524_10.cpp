#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(5);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    cout << v[n-1] << endl;
}