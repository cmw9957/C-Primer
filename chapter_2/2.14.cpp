//다음 프로그램은 올바른가? 옳다면 출력값은 무엇인가?

#include<iostream>

int main(){
	int i = 100, sum = 0;
	for(int i = 0;i != 10; ++i)
		sum += i;
		
	std::cout << i << " " << sum << std::endl;
	
	return 0;
} 
