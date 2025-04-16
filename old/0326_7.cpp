#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    int x, y;
    cin >> x >> y;
    cout << x * y << endl;

  }
  else {
    string s;
    int x, y;
    cin >> s >> x >> y;
    cout << s << "!" << endl;
    cout << x * y << endl;
  }
}