#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 1; i <= 5; i++){
        int ans = 0;
        for (int j = 0; j < 4; j++) {
            if (i == v[j]) {
                ans++;
            }

        }
        if (ans == 0) cout << i << endl;
    }
}