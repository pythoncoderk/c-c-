#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "3.141592653589793";
    int n;
    cin >> n;
    cout << "3.";
    for (int i = 0; i < n; i++) {
        cout << s[i+2];
    }
    cout << endl;
}