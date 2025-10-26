#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";

    s.at(0) = 'M';
    cout << s << endl;

    if (s.at(1) == 'e') cout << "AtCoder" << endl;
}