#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    if (a[a.length()-1] == b[0] && b[b.length()-1] != 'n') {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}