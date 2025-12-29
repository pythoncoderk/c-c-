#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v1 = { a, b, c };
    vector<char> v2 = {'A', 'B', 'C', 'D', 'E','F','G','H','I','J'};
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < v1[i]; j++) {
            cout << v2[count];
            count++;
        }
        cout << endl;
    }

}