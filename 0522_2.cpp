#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string str = "samurai engineer!";

    std::cout << "置換前：" << str << std::endl;

    str.replace(8, 8, "programmer");

    std::cout << "置換後：" << str << std::endl;

    return 0;
}
