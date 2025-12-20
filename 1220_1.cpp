#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int h, m;
    char colon;
    stringstream ss(s);
    ss >> h >> colon >> m;

    h -= 8;
    if (h < 0) h += 24;

    cout << h << ":" << m << endl;
    return 0;
}
