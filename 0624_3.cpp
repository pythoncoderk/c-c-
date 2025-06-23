#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v{'a', 'e', 'i', 'o', 'u'};
    char c;
    cin >> c;
    bool flag = true;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == c) {
            flag = false;
        }
    }
    if (flag) {
        cout << "consonant" << endl;
    }
    else {
        cout << "vowel" << endl;
    }

}