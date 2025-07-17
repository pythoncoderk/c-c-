#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    float x = log2(n);
    if (x == pow(2, x)) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}