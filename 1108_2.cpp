#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    vector<int> v = {a, b, c, d, e};
    vector<int> ans = {1, 2, 3, 4, 5};

    for (int i = 0; i < 4; i++) {
        vector<int> v2 = v;
        swap(v2[i], v2[i+1]);
        if (ans == v2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}