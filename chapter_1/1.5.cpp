//문장을 나눠 각 피연산자별로 출력하도록 프로그램을 수정. 

#include <iostream>
int main() {
  std::cout << "Enter two numbers:" << std::endl;
  int x = 0, y = 0;
  std::cin >> x >> y;
  std::cout << "The sum of " << x ;
  std::cout << " and " << y << " is ";
  std::cout << x + y << std::endl;
  return 0;
}
