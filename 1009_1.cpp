#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    vector<int> v = {r, g, b};
    string s;
    cin >> s;
    if (s == "Red") {
        cout << min(g, b) << endl;
    }
    else if (s == "Green") {
        cout << min(r, b) <<endl;
    }
    else if (s == "Blue") {
        cout << min(r, g) << endl;
    }
}