#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<string> v;
    string str, s;

    cin >> str;

    stringstream ss(str);

    while (getline(ss, s, ',')) {
        v.push_back(s);
    }
    for (const string & s : v) {
        cout << s << endl;
    }
}