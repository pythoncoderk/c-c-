#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        string s;
        s = to_string(i);
        string j = to_string(i);
        reverse(s.begin(), s.end());
        if (j == s) {
            count++;
        }


        }
    cout << count << endl;
    }