//앞 연습문제에서 루프 제어 변수를 char타입으로 정의하면 어떻게 될지 결과를 예상해보고 프로그램을 변경해 예상이 옳은지 확인한다.

//안된다. 왜냐하면 문자열의 값을 가지고 있는 s변수에 값을 초기화 할수없기 때문이다. 초기화 하려면 참조자를 이용해 참조해야한다. 

#include<iostream>
using namespace std;

int main(){
	string s = "minwoo is jjang!";
	
	for(char c : s){ 
		if(c != 'x')
			c = 'x';
	}
	
	cout << s;
	return 0;
} 
