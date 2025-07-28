#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<string> v = {"Gold ", "Silver ", "Bronze "};
    vector<string> v2 = {s1, s2, s3};
    for (int i = 0; i < 3; i++) {
        cout << v[i] << v2[i] << endl;
    }
}