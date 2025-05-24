#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int l[3] = {a, b, c};
    int max = *max_element(begin(l), end(l));
    cout << max << endl;
}