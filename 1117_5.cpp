#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    vector<int> v2;

    v2 = v;
    sort(v2.begin(), v2.end(), greater<int>());
    for (int i = 0; i < v2.size(); i++){
        for (int j = 0; j < v.size(); j++) {
            if (v[i] == v2[j]) cout << j + 1 << endl;
        }

    }
}