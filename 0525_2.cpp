#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if (s == "km") {
        cout << n * 1000000 << endl;
    }
    else if (s == "m") {
        cout << n * 1000 << endl;
    }
    else {
        cout << n * 10 << endl;
    }
}