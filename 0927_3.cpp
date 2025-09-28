#include <bits/stdc++.h>
using namespace std;

int main() {
    string ans;
    string a, b, c;
    cin >> a >> b >> c;
    vector<int> v3 = {3, 3, 3};
    if (a == "<") {
        v3[0]--;
    }
    else {
        v3[1]--;
            }
    if (b == "<") {
        v3[0]--;
    }
    else {
        v3[2]--;
    }
    if (c == "<") {
        v3[1]--;
    }
    else {
        v3[2]--;
    }

    for (int i = 0; i < v3.size(); i++) {
        if (v3[i] == 2) {
            if (i == 0) {
                cout << "A" << endl;
            }
            else if (i == 1) {
                cout << "B" << endl;
            }
            else {
                cout << "C" << endl;
            }
        }
    }

}