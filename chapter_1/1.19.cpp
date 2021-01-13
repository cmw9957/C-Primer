//1.4.1절 연습문제에서 만든, 입력받은 두 수의 범위에 속한 숫자를 출력하는 프로그램을 고쳐 첫 번째 입력값이 두 번째 것보다 더 작도록 처리한다.

#include<iostream>

int main(void){
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	
	while(v1 <= v2){
		std::cout << v1++ << " ";
	}
	std::cout << std::endl; 
	return 0;
} 
