//정수 집합을 읽어 vector에 넣고 각 인접 요소 싸으이 합을 출력한다. 
//프로그램을 고쳐 처음과 마지막 요소 합, 두 번째와 마지막에서 두 번째의 합 순으로 출력한다.

#include <iostream>
#include <vector>

void sum_adjacent(const std::vector<int> v) {
  if (v.size() < 2)
    return;
  for (decltype(v.size()) i = 0; i < v.size() - 1; ++i)
    std::cout << v[i] + v[i + 1] << '\t';
  std::cout << std::endl;
}

void sum_symmetric(const std::vector<int> v) {
  // If the vector has odd size, element in the middle will add to itself.
  auto mid = (v.size() + 1) / 2;
  for (decltype(mid) i = 0; i != mid; ++i)
    std::cout << v[i] + v[v.size() - 1 - i] << '\t';
  std::cout << std::endl;
}

int main() {
  std::vector<int> iv;
  int i;
  while (std::cin >> i)
    iv.push_back(i);

  sum_adjacent(iv);
  sum_symmetric(iv);

  return 0;
}
