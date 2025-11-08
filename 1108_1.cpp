#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }
    vector<int> v2 = v;
    for (int i = 0; i <= 5; i++) {
        if (v[i] > v[i+1]) swap(v[i], v[i+1]);
    }
}