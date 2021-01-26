//다음 코드에서 출력이 무엇일지 예상하고 이유를 설명한다. 이제 프로그램을 실행해 출력 결과가 예상한 것과 같은지 확인하고 다르다면 이유를 설명한다.

#include <iostream>

int main() {
  int x[10];
  int *p = x;
  std::cout << sizeof(x) / sizeof(*x) << std::endl;  // 10
  std::cout << sizeof(p) / sizeof(*p) << std::endl;  // 포인터의 크기 / int 타입의 크기 

  return 0;
}
