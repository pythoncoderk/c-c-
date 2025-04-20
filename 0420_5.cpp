#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ans = 0;
    for (int i = 0; i < 7; i ++) {
        cin >> s;
        if (s == "Rain") {
            ans ++;
        }
    }
    if (ans >= 4) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}