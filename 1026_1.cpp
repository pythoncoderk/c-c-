#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ans = 0;
    bool flag = true;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0) {
            ans++;
        }
        else {
            char c = str[i];
            if (c == '+') {
                flag = true;
            }
            else if (c == '-'){
                flag = false;
            }
            else {
                if (flag) {
                    ans++;
                }
                else {
                    ans--;
                }
            }
        }
    }
    cout << ans << endl;
}