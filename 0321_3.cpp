# include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (!(x == y)) {
    cout << "x��y�͓������Ȃ�" << endl;
  }

  if (x == 10 && y == 10) {
    cout << "x��y��10" << endl;
  }

  if (x == 0 || y == 0) {
    cout << "x��y��0" << endl;
  }
  cout << "�I��" << endl;
}