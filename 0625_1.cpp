#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> s >> m;
    if (s == "+") {
        cout << n + m << endl;
    }
    else {
        cout << n - m << endl;
    }
}