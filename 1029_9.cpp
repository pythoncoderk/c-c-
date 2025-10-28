#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(3, 10);
    v = vector<int>(100, 2);
    cout << v.at(99) << endl;
}