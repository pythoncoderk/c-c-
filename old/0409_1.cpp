#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }
    int answer = 0;

    if (data.at(0) == a) {
        answer++;
    }
    if (data.at(1) == a) {
        answer++;
    }
    if (data.at(2) == a) {
        answer++;
    }
    if (data.at(3) == a) {
        answer++;
    }
    if (data.at(4) == a) {
        answer++;
    }
    cout << answer << endl;
}