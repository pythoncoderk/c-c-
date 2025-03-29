# include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  int m;
  cin >> n >> s >> m;
  if (s == "+") {
    cout << n + m << endl;
  }
  else if (s == "-") {
    cout << n - m << endl;
  }
  else if (s == "*") {
    cout << n * m << endl;
  }
  else if (s == "/" && m != 0) {
    cout << n / m << endl;
  }
  else {
    cout << "error" << endl;
  }

}