# include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if (n + m >= 1000) {
    cout << n + m - 100 << endl;
  }
  else {
    cout << n + m << endl;
  }
}