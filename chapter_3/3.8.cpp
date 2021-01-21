//첫번째 연습문제에서 만든 프로그램을 while과 전통적인  for 루프를 사용해 각각 다시 만든다. 세가지 방법중 어느 것이 가장 좋으며 이유는 무엇인지 설명한다.

//가장 좋은것은 첫번쨰이다. 왜냐하면 index를 따로 설정해줄 필요도없고 직관적이기 때문이다. 

#include<iostream>
using namespace std;

string s = "minwoo is jjang!";

void using_for(){
	for(auto &c : s){
		if(c != 'x')
			c = 'x';
	}
	cout << s << endl;
}

void using_while(){
	decltype(s.size()) index = 0;
	while(index != s.size()){
		if(s[index] != 'x')
			s[index] = 'x';
		
		index++;
	}
	cout << s << endl;
}

void using_for_traditional(){
	for(decltype(s.size()) index = 0;index != s.size();index++){
		if(s[index] != 'x'){
			s[index] = 'x';
		}
	}
	cout << s << endl;
}

int main(){
//	using_for();
//	using_while();
//	using_for_traditional();
	return 0;
} 
