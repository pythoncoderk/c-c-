#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a;
    cin >> n;
    cin >> a;
    int ans;
    ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s >> num;

        if (s == "+") {
            ans = a + num + ans;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "-") {
            ans = a - num + ans;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "*") {
            ans = num * ans;
            cout << i + 1 << ":" << ans << endl;
        }
        else if (s == "/") {
            if (num == 0) {
                cout << "error" << endl;
                break;
            }
            else {
                ans = ans / num;
                cout << i + 1 << ":" << ans << endl;
            }

        }
    }
}