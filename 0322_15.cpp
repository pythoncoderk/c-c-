#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  char a = s[0];
  char b = s[1];
  char c = s[2];
  char d = s[3];
  if ((a == b && b == c) || (b == c && c == d)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}