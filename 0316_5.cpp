#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;

  if (x < 10){
    cout << "x��10��菬����" << endl;
  }
  else if (x > 20){
    cout << "x��10��菬�����Ȃ��āA20���傫��" << endl;

  }
  else if (x == 15){
    cout << "x��10��菬�����Ȃ��āA20���傫���Ȃ��āA15�ł���" << endl;
  }
  else {
    cout << "x��10��菬�����Ȃ��āA20���傫���Ȃ��āA15�ł��Ȃ�" << endl;
  }
}