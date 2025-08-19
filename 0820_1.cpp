#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (flag >= 2) {
            cout << "No" << endl;
            return 0;
        }
        else {
            if (s == "sweet") {
                flag++;
            }
            else {
                flag = 0;
            }
        }
    }
    cout << "Yes" << endl;
}