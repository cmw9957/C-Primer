//확장 문자열을 사용해 2M과 줄바꿈 문자를 출력하는 프로그램을 만든다. 이 프로그램을 수정해 2, 탭, M, 줄바꿈 문자를 출력하게 한다.

#include <iostream>

int main() {
  std::cout << ">" << "2M\n" << "<" << std::endl;
  std::cout << ">" << "2\tM\n" << "<" << std::endl;

  return 0;
} 
