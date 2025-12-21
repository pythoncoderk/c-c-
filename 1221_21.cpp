#include <bits/stdc++.h>
using namespace std;

int main() {
    int cat, dog;
    cat = 0;
    dog = 0;
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        if (s == "cat") cat += 1;
        else if (s == "dog") dog += 1;
    }
    if (cat > dog) cout << "cat" << endl;
    else cout << "dog" << endl;
}