//다음 코드에서 출력하는 내용은 무엇인가?

#include<iostream>

int main(){
	int i, &ri = i;
	
	i = 5;	ri = 10;
	
	std::cout << i << " " << ri << std::endl;
	return 0;
}
//10 10 
