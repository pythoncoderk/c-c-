#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t x = s.find("False");
    size_t y = 5;
    replace(x, y, 'False', 'True');

}