//���� ǥ������ ������ �켱���� ������ ���������� ���Ѵ�. ǥ 4.12�� �̿��� �� �����ϴ���, ��� ��ġ���� �����Ѵ�. 

#include <string>
using std::string;

int main() {
  string s = "word";
  //string pl = s + s[s.size() - 1] == 's' ? "" : "s";
  string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

  //���� �����ڴ� ��� �����ں��� �켱������ ���� �����̴�. 

  return 0;
}
