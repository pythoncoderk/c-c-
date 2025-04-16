#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a;
  cin >> n >> a;
  int x = n % 500;
  if (a >= x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}