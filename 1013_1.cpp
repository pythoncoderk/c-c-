#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    if (x == "Ocelot") {
        if (y == "Serval" || y == "Lynx" || y == "Ocelot") {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    } else if (x == "Serval") {
        if (y == "Lynx" || y == "Serval") {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    } else if (x == "Lynx") {
        if (y == "Lynx") {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    else {
        cout << "Yes" << endl;
    }
}