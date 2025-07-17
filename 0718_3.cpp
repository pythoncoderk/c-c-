#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<int> v = {
        static_cast<int>(s1.size()),
        static_cast<int>(s2.size()),
        static_cast<int>(s3.size())
    };
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
}