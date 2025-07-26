#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int r = 0;
    int ss = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            r++;
        }
        else {
            ss++;
        }
    }
    cout << ss << " " << r << endl;
}