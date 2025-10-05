#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 99) {
        cout << 100 - n << endl;
    }
    else if (n <= 199) {
        cout << 200 - n << endl;
    }
    else if (n <= 299) {
        cout << 300 - n << endl;
    }
    else {
        cout << 400 - n << endl;
    }
}