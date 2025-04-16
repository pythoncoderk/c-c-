#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  char one = s[0];
  char two = s[1];
  char three = s[2];
  cout << static_cast<int>(one) + static_cast<int>(two) + static_cast<int>(three) << endl;
}