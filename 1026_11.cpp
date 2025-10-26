#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; ++i) cin >> S[i];

    // 8近傍の方向ベクトル
    const int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
    const int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};

    vector<string> T = S; // 結果用（'#' はそのまま使える）

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (S[i][j] == '#') continue; // 地雷はそのまま
            int cnt = 0;
            for (int k = 0; k < 8; ++k) {
                int ni = i + dx[k], nj = j + dy[k];
                if (0 <= ni && ni < H && 0 <= nj && nj < W) {
                    if (S[ni][nj] == '#') ++cnt;
                }
            }
            T[i][j] = char('0' + cnt);
        }
    }

    for (int i = 0; i < H; ++i) {
        cout << T[i] << "\n";
    }
    return 0;
}
