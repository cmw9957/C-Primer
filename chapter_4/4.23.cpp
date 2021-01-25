//다음 표현식은 연산자 우선순위 때문에 컴파일하지 못한다. 표 4.12를 이용해 왜 실패하는지, 어떻게 고치는지 설명한다. 

#include <string>
using std::string;

int main() {
  string s = "word";
  //string pl = s + s[s.size() - 1] == 's' ? "" : "s";
  string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

  //조건 연산자는 산술 연산자보다 우선순위가 낮기 때문이다. 

  return 0;
}
