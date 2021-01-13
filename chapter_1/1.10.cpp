//감소 연산자를 사용해 10부터 0까지를 출력하는 while 루프를 작성

#include<iostream>

int main(void){
	int v = 10;
	
	while(v >= 0){
		std::cout << v-- << std::endl;
	}
	return 0;
} 
