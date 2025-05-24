#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 7; i++) {
        string s;
        cin >> s;

        if (s == "no") {
            count++;
        }
    }
    cout << count << endl;
}