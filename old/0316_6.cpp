#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  string s;
  int y;
  cin >> x >> s >> y;

  if (s == "+") {
    cout << x + y << endl;
  } else if (s == "-") {
    cout << x - y << endl;
  } else if (s == "*") {
    cout << x * y << endl;
  } else if (s == "/" && y == 0) {
    cout << "error" << endl;
  } else if (s == "/") {
    cout << x / y << endl;
  } else cout << "error" << endl;
}