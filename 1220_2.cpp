#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n, m;
    char t;
    stringstream ss(s);
    ss >> n >> t >> m;

    n -= 8;
    if (n < 0) cout << n + 24 << t << m << endl;
    else cout << n << t << m << endl;


}