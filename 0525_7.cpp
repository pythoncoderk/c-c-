#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = m - (m * 0.3);
    int sum[2] = {n, ans};
    cout << *min_element(begin(sum), end(sum)) << endl;
}