//while을 이용해 50부터 100까지 수를 더하는 프로그램을 작성

#include<iostream>

int main(void){
	int v1 = 50, sum = 0;
	
	while(v1 <= 100){
		sum += v1;
		v1++;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
} 
