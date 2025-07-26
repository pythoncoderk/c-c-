#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int find_s = s.find(":");
    string m = s.substr(0, find_s);
    string e = s.substr(find_s + 1, s.size());
    int mm = stoi(m);
    if (mm - 8 < 0) {
        cout << to_string((mm - 8) + 24) << ":" << e << endl;
    }
    else {
        cout << to_string((mm - 8)) << ":" << e << endl;
    }

}