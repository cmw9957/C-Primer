//172쪽에 있는 vector의 요소를 출력하는 while 루프에 전위 증가 연산자를 사용하면 어떻게 될지 설명한다.

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5};
	auto pbeg = v.begin();
	while(pbeg != v.end() && *pbeg >= 0)
		cout << ++*pbeg << '\n';
} 

//루프는 첫번 째 요소를 제외한 모든 요소를 출력하고 마지막 요소 다음 요소를 역참조를 시도할 것이다. 이는 에러이다.
//그리고 음수값이 발견될 때 까지 역참조 할 것이다. 
