#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.length();
    int ans;
    for (int i = 0; i < len; i++) {
        ans += (n[i] - '0');

    }
    int a;
    a = stoi(n);
    if (a % ans == 0) {
        cout << "Yes" << endl;

    }
    else {
        cout << "No" << endl;
    }
}