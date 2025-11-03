#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> num(N, 0);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;  // デクリメントする

        num[a]++;
        num[b]++;
    }

    // 出力
    for (int i = 0; i < N; i++) cout << num[i] << endl;
}
