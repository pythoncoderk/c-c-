#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(3);

    cin >> vec[0] >> vec[1] >> vec[2];

    cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;
}