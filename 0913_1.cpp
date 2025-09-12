#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char x = s[0];
    char y = s[2];
    int xx = x - '0';
    int yy = y - '0';
    if (yy == 8) {
        yy = 1;
        xx++;
    }
    else {
        yy += 1;
    }
    cout << xx << "-" << yy << endl;
}