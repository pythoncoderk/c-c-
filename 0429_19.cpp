#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);

    }
    int sum = std::reduce(std::begin(vec), std::end(vec));
    std::cout << sum << std::endl;

}