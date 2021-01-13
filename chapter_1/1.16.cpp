//cin에서 정수를 임의 개수로 읽어 합을 출력하는 프로그램을 작성

#include<iostream>

int main(void){
	int v = 0, sum = 0;
	
	while(std::cin >> v){
		sum += v;
	}
	
	std::cout << sum << std::endl;
	return 0;
} 
