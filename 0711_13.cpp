#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1;
    string s2;
    cin >> s1 >> s2;
    int count = 0;
    for (int i = 0; i < s2.size(); i++) {
        char ch = s2[i];
        if (s2[i] == s1) {
            count++;
        }
    }
    cout << count << endl;
}