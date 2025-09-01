#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {
        'a','b','c','d','e','f','g','h',
        'i','j','k','l','m','n','o','p','q','r','s','t',
        'u','o','p','q','r','s','t','u','v','w','x','y','z'
    };
    string s;
    cin >> s;
    for (int i = 0; i < v.size(); i++) {
        char c = v[i];
        if (s.find(c) == string::npos) {
            cout << v[i] << endl;
            return 0;
        }

    }

}