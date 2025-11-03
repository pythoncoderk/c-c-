#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    for (int i = 0; i < H; i++) cin >> a.at(i);

    vector<string> S(H+2, string(W+2, '#'));

    for (int i = 1; i < H+1; i++) {
        for (int j = 1; j < W+1; j++) {
            S[i][j] = a[i-1][j-1];
        }
    }
    for (int i = 0; i < H+2; i++) cout << S[i] << endl;
}