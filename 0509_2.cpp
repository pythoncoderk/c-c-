#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    vector<int> v{b, c, d, e};
    int min = *min_element(v.begin(), v.end());
    cout << min * a << endl;
}