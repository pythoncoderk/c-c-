#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 0 && n <= 30) {
        cout << "sunny" << endl;
    }
    else if (n >= 31 && n <= 70) {
        cout << "cloudy" << endl;
    }
    else if (n >= 71) {
        cout << "rainy" << endl;
    }
}