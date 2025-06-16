#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        string s1;
        s1 = to_string(i);
        reverse(s1.begin(), s1.end());
        if (s1 == to_string(i)) {
            ans++;
        }


    }
    cout << ans << endl;



}