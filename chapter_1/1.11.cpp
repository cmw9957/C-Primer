//사용자에게 두 정수의 범위 내에 있는  수를 출력하는 프로그램을 작성 

#include<iostream>

int main(void){
	int v1 = 0, v2 = 0;
	
	std::cin >> v1 >> v2;
	
	while(v1 <= v2){
		std::cout << v1++ << std::endl;
	}
	return 0;
} 
