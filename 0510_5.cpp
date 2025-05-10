#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g_count = 0;
    int p_count = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "G") {
            g_count ++;
        }
        else {
            p_count ++;
        }

    }
    if (g_count == p_count) {
        cout << "Draw" << endl;
    }
    else if (g_count > p_count) {
        cout << "P" << endl;
    }
    else {
        cout << "G" << endl;
    }
}
