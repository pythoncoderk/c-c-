#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag = 0;
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }
    for (int i = 0; i < 4; i++) {
        if (data.at(i) == data.at(i + 1)) {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "NO" << endl;
    }

}