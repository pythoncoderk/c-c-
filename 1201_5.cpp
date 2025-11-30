#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    cout << accumulate(v.begin(), v.end(), 0) << endl;
}