//포인터 값을 바꾸는 코드를 만들고 그 포인터로 가리키는 값을 바꾸는 코드를 만든다.

#include<iostream>

int main(){
	int i = 0;
	int *p = &i;
	
	*p = 100;
	
	std::cout << i << std::endl;
	return 0;
} 
