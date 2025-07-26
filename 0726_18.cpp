#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int cat = 0;
    int dog = 0;
    vector<string> v = {s1, s2, s3};
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == "cat") {
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