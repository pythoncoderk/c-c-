#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  cout << x + 1 << endl;

  cout << (x + 1) * (a + b) << endl;

  cout << ((x + 1) * (a + b)) * ((x + 1) * (a + b)) << endl;
  cout << ((x + 1) * (a + b) * ((x + 1) * (a + b))) - 1 << endl;
}