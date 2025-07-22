#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == 'R') {
            total++;
        }
    }
    if (total >= n) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}