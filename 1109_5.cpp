#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int time = 0;
    int ans = 0;
    bool flag = true;
    while (time < x) {
        if (flag) {
            if (a + time < x) {
                time += a;
                ans += s * a;
                flag = false;
            }
            else {
                ans += (x - time) * s;
                break;
            }

        }
        else {
            time += b;
            flag = true;
        }
    }
    cout << ans << endl;
}