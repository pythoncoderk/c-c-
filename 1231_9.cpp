#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[7];
    for (int i = 0; i < 7; i++) {
        cin >> l[i];
    }
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (l[i] <= 30) count++;
    }
    cout << count << endl;
}