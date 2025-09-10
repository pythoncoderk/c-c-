#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    vector<int> v1;
    for (int i = 0; i < 5; i++) {
        v1.push_back(v[i]);
    }
    sort(v1.begin(), v1.end());
    bool flag = false;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (v[i] != v1[i]) {
            count++;
            if (count == 2) {
                flag = true;
                break;
            }
            else {
                if (v[i] == v1[i]) {
                    count = 0;
                }
            }
        }
    }
    if (flag && (count == 2 || count == 0))
        cout << "Yes" << endl;
    else cout << "No" << endl;
}