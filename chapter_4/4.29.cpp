//���� �ڵ忡�� ����� �������� �����ϰ� ������ �����Ѵ�. ���� ���α׷��� ������ ��� ����� ������ �Ͱ� ������ Ȯ���ϰ� �ٸ��ٸ� ������ �����Ѵ�.

#include <iostream>

int main() {
  int x[10];
  int *p = x;
  std::cout << sizeof(x) / sizeof(*x) << std::endl;  // 10
  std::cout << sizeof(p) / sizeof(*p) << std::endl;  // �������� ũ�� / int Ÿ���� ũ�� 

  return 0;
}
