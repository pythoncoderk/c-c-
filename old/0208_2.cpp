# include <iostream>

int main(){
  int x = 0;

  std::cout << "���������";

  if (std::cin >> x){
    std::cout << "���͒l��" << x << "�ł��B" << std::endl;
  } else {
    std::cout << "�s��" << std::endl;
  }
  return 0;
}