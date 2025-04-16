#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 10000;
  int m;
  for (int i = 0; i < 4; i++) {
     cin >> m;
     if (n > m) {
       n = m;
     }
  }
  cout << n << endl;
}