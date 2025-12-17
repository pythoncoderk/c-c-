#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ten = s.find(":");
    string hour = s.substr(0, ten);
    int x = stoi(hour);
    if (x - 8 < 0) x = x - 8 + 24;
    else x = x - 8;
    cout << x << s.substr(ten, s.size()) << endl;
}