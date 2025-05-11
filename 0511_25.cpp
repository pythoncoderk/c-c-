#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        if (i == n.length() - 1 || i == n.length() - 2) {
            cout << "0";
        }
        else {
            cout << n[i];
        }
    }
    cout << endl;
}