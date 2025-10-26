#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'O') count++;
    }
    cout << count << endl;
    }