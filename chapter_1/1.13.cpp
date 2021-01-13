//1.4.1절의 while문을 for문으로 바꾸어 츠로그램을 작성

#include<iostream>

int main(void){
	int sum = 0;
	
	for(int i = 1;i <= 10;i++)
		sum += i;
	
	std::cout << "Sum of 1 to 10 inculsive is " << sum << std::endl;
	return 0;
} 
