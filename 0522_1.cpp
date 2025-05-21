#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::string from = "False";
    std::string to = "True";
    size_t pos = 0;

    while ((pos = s.find(from, pos)) != std::string::npos) {
        s.replace(pos, from.length(), to);
        pos += to.length();  // 次の検索の開始位置を更新
    }

    std::cout << s << std::endl;

    return 0;
}