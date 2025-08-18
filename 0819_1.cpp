#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (count >= 3) {
            cout << "No" << endl;
            exit(1);
        }
        if (s == "sweet") {
            count++;
        }
    }
    cout << "Yes" << endl;
}