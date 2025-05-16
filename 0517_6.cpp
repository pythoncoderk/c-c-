#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    string ans;

    ans = to_string(sum);
    int len = ans.length();
    cout << ans[len-1] << endl;
}