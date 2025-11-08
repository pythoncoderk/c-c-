#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;
    int times = 0;
    int ans = 0;
    bool flag = true;
    while (true){
        if (flag) {
            ans += s * a;
            times += a;
            flag = false;
        }
        else {
            times += b;
            flag = true;
        }
    }
}