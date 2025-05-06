#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    double ans = n * 1.5;

    // 小数点第一位まで出力（末尾に改行）
    std::cout << std::fixed << std::setprecision(1) << ans << std::endl;

}