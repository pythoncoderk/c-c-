#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string arr[3] = {a, b, c};
    int cat = 0;
    int dog = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i] == "cat") {
            cat++;
        }
        else {
            dog++;
        }

        }
    if (cat > dog) {
        cout << "cat" << endl;
    }
    else {
        cout << "dog" << endl;
    }
}