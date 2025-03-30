#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "A:";
    int i = 0, j = 0;
    while (a > i) {
        cout << "]";
        i++;
    }
    cout << endl;
    cout << "B:";
    while (b > j) {
        cout << "]";
        j++;
    }
    cout << endl;
}