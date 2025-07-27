#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<string> abc = {
        "A", "B", "C", "D", "E", "F",
        "G", "H", "I", "J"
    };
    vector<int> v = {a, b, c};
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < v[i]; j++) {
            cout << abc[count];
            count++;
        }
        cout << endl;
    }
}