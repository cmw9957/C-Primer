//예상이 맞는지 확인하는 프로그램을 만든다.

#include<iostream>

int main(void){
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;	//32
	std::cout << u - u2 << std::endl;	//4,294,967,264
	
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;	//32
	std::cout << i - i2 << std::endl;	//-32
	std::cout << i - u << std::endl;	//0
	std::cout << u - i << std::endl;	//0
	
	return 0;
}


