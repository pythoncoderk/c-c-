#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    int now = 0;
    int total = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << char(v[j]+total);
            ++now;
        }
        total = now;
        cout << endl;
    }
}