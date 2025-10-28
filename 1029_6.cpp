#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};

    v1.push_back(4);

    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) << endl;
    }
}