#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n.size(); i++) {
        int a = 0;
        a = (n[i] - '0');
        ans += a;
    }
    if (stoi(n) % ans == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}