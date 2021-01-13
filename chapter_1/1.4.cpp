//두 수를 곱하는 프로그램 작성 

#include<iostream>

int main(void){
	int v1 = 0, v2 = 0;
	
	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "The mul of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
