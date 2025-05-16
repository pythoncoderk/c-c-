#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    vector<int> v(10);
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
    for (int i = 0; i < size(v); i++) {
        if (v[i] <= 2) {
            count++;
        }
    }
    cout << count << endl;
}