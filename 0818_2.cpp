#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (a == 0 && b == 0) {
        cout << s << endl;
    }
    else {
        s.erase(0,a);
        s.erase(b, s.size());
        cout << s << endl;
    }

}