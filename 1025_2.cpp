#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    bool flag = true;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (true) {
        flag = true;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 != 0) {
                flag = false;
                break;
            }


            }
        if (flag){
            for (int j = 0; j < n; j++) {
                v[j] /= 2;
            }
            ans++;
        }
        else {
            break;
        }

    }

    cout << ans << endl;

}